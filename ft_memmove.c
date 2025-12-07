#include "libft.h"

/*
Copies 'len' bytes from memory area 'src' to memory area 'dst'.
The memory areas may overlap.
Return value: A pointer to 'dst'.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s || len == 0)
		return (dst);
	if (d > s && d < s + len)
	{
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
