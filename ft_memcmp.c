#include "libft.h"
/*
Compares the first 'n' bytes of memory areas 's1' and 's2'.
Return value:
An integer less than, equal to, or greater than zero if
the first 'n' bytes of 's1' is found, respectively,
to be less than, to match, or be greater than the first 'n' bytes of 's2'.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
