#include "libft.h"
/*
Fills the first 'len' bytes of the memory area pointed
 to by 'b' with the constant byte 'c'.
Return value: A pointer to the memory area 'b'.
*/	
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
