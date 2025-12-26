#include "libft.h"
#include <stdlib.h>
/*
Allocates (with malloc(3)) and returns a substring from the string 's'.
The substring starts at index 'start' and is of maximum size 'len'.
Return value: The substring. NULL if the allocation fails.	
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start || len == 0)
		return (ft_strdup(""));

	if (s[start] != '\0')
	{
		substr = (char *)malloc(sizeof(char) * (len + 1));
		if (!substr)
			return (NULL);
		while (j < len && s[start + j] != '\0')
		{
			substr[j] = s[start + j];
			j++;
		}
		substr[j] = '\0';
		return (substr);
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *str = "Hello, World!";
// 	unsigned int start = 20;
// 	size_t len = 5;
// 	char *result;

// 	result = ft_substr(str, start, len);
// 	if (result)
// 	{
// 		printf("Substring: %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}

// 	return (0);
// }
