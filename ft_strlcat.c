#include "libft.h"
#include <stdio.h>  // For demonstration purposes only
#include <string.h> // For comparison with standard strlcat
/*
This fuction appends the src string to the dst string,
NUL-terminating the result as long as there is enough space in dst.
Return value: The total length of the string it tried to create,
that is the initial length of dst plus the length of src.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	total;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && (dst_len + i + 1) < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dstsize > dst_len)
		total = dst_len + src_len;
	else
		total = dstsize + src_len;
	dst[dst_len + i] = '\0';
	return (total);
}
// int main()
// {
// 	char dest1[20] = "Hello, ";
// 	char dest2[20] = "Hello, ";
// 	const char *src = "World";
// 	size_t size = 0;
// 	size_t result1 = ft_strlcat(dest1, src, size);
// 	size_t result2 = strlcat(dest2, src, size);
// 	printf("ft_strlcat Result: %zu, Destination: %s\n", result1, dest1);
// 	printf("strlcat Result: %zu, Destination: %s\n", result2, dest2);
// 	return 0;
// }