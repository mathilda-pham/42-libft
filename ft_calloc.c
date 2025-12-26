#include <stdlib.h>
// #include <stdio.h>

void	*ft_calloc(unsigned int count, unsigned int size)
{
	void			*ptr;
	unsigned long	total_size;
	unsigned int	i;
	unsigned char	*byte_ptr;

	total_size = (unsigned long)count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (0);
	byte_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
// [int main()
// {
// 	void *ptr = ft_calloc(2147483647, 2147483647);
// 	free(ptr);
// }]