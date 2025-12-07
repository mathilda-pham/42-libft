#include "libft.h"
/*
The function searches for the first occurrence of the character 'c'
in the string 's'.
The terminating null byte ('\0') is considered part of the string.
Returns a pointer to the first occurrence of 'c' in 's'.
Returns NULL if the character is not found.
*/
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
