#include "libft.h"
#include <stdlib.h>
/*
Allocates memory (using malloc(3)) and returns an
array of strings obtained by splitting ’s’ using
the character ’c’ as a delimiter. The array must
end with a NULL pointer.
Return value: The array of new strings resulting from the split.
NULL if the allocation fails.
*/

/* Count how many words (non-delimiter sequences) are in s */
static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

/* Free result[0..j-1] and result itself */
static char	**free_result(char **result, int j)
{
	while (j > 0)
	{
		j--;
		free(result[j]);
	}
	free(result);
	return (NULL);
}

/* Skip delimiters and update i and start */
static void	skip_delims(char const *s, char c, int *i, int *start)
{
	while (s[*i] == c && s[*i] != '\0')
	{
		(*i)++;
		*start = *i;
	}
}

/* Extract one word, store it, and move indexes */
static int	add_substr(char const *s, char c, char **result, int *i, int *j)
{
	int	start;

	start = *i;
	while (s[*i] != c && s[*i] != '\0')
		(*i)++;
	result[*j] = ft_substr(s, start, *i - start);
	if (!result[*j])
		return (0);
	(*j)++;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	start = 0;
	while (s[i] != '\0')
	{
		skip_delims(s, c, &i, &start);
		if (s[i] != c && s[i] != '\0')
			if (!add_substr(s, c, result, &i, &j))
				return (free_result(result, j));
	}
	result[j] = NULL;
	return (result);
}
