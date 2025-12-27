#include "libft.h"
/*
Sets the first n bytes of the area pointed
to by s to zero (bytes containing '\0').
Return value: None.
*/
void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
// int	main(void)
// {
// 	char	str[] = "Hello, World!";
// 	size_t	n = 5;

// 	printf("Before ft_bzero: %s\n", str);
// 	ft_bzero(str, n);
// 	printf("After ft_bzero: %s\n", str);
// 	return (0);
// }