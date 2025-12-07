#include "libft.h"
#include <stdlib.h>
#include <string.h>
/*
Allocates (with malloc(3)) and returns a substring from the string 's'.
The substring starts at index 'start' and is of maximum size 'len'.
Return value: The substring. NULL if the allocation fails.	
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		i++;
					printf("i: %zu\n", i);
		if (i >= start)
		{
			substr = (char *)malloc(sizeof(char) * (len + 1));
			if (!substr)
				return (NULL);
			while (j < len && s[start + j] != '\0')
			{
				substr[j] = s[start + j];
				printf("substr[%zu]: %c\n", j, substr[j]);
				j++;
			}
			substr[j] = '\0';
			return (substr);
		}
	}
	return (0);
}

int	main(void)
{
	const char *str = "Hello, World!";
	unsigned int start = 20;
	size_t len = 5;
	char *result;

	result = ft_substr(str, start, len);
	if (result)
	{
		printf("Substring: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}
