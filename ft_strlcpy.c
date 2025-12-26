#include "libft.h"
#include <stdio.h>
/*
Copies up to dstsize - 1 characters from the string src to dst,
NUL-terminating the result if dstsize is not 0.
Return value: The total length of the string it tried to create,
that is the length of src.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main(void)
// {
// 	char dest[10];
// 	const char *src = "Hello, World!";
// 	size_t size = sizeof(dest);

// 	size_t result = ft_strlcpy(dest, src, size);

// 	printf("Copied string: %s\n", dest);
// 	printf("Length of source string: %zu\n", result);

// 	return (0);
// }
