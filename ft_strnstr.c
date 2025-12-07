#include "libft.h"
#include <stdio.h>
/*
The function locates the first occurrence of the null-terminated string to_find
in the string str, where not more than len characters are searched.
Return value:
If to_find is an empty string, str is returned;
if to_find occurs nowhere in str, NULL is returned;
otherwise a pointer to the first character of the first
occurrence of to_find is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (*needle == '\0')
		return ((char *)haystack);
	h = 0;
	while (haystack[h] != '\0' && h < len)
	{
		n = 0;
		while ((h + n) < len
			&& haystack[h + n] == needle[n]
			&& needle[n] != '\0')
		{
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)(haystack + h));
		h++;
	}
	return (NULL);
}

// int main()
// {
// 	printf("%s\n", ft_strnstr("Hello worldz", "worldz", 12));
// 	return 0;
// }
