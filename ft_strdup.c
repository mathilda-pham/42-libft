#include "libft.h"
#include <stdlib.h>
/*
This function duplicates the string s1 by allocating sufficient memory
for a copy of s1, does the copy, and returns a pointer to it.
Return value: A pointer to the duplicated string.
NULL if insufficient memory was available.
*/

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_strcpy(char *dest, char *src)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i] != '\0')
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// char	*ft_strdup(char *src)
// {
// 	char	*dest;

// 	dest = malloc(ft_strlen(src) + 1);
// 	return (ft_strcpy(dest, src));
// }

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*dup;

	len = ft_strlen(s1);
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
