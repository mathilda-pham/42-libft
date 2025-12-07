#include "libft.h"
/*
Allocates memory (using malloc(3)) and returns a
new string, which is the result of concatenating
’s1’ and ’s2’.
Return value: The new string. NULL if the allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	joined = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);

	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	return (joined);
}

int main(void)
{
	const char *str1 = "Hello, ";
	const char *str2 = "World!";
	char *result;

	result = ft_strjoin(str1, str2);
	if (result)
	{
		printf("Joined string: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}
