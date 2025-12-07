#include "libft.h"
/*
Scans the first 'n' bytes of the memory area pointed to by 's'
for the first occurrence of the byte value 'c'.
Return value:
- Pointer to the matching byte, or
- NULL if 'c' does not occur in the first 'n' bytes.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

