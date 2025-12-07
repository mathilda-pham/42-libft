#include "libft.h"
#include <unistd.h>
/*
Outputs the character 'c' to the specified file descriptor.
Return value: None.
*/
void	ft_putchar_fd (char c, int fd)	
{
	write(fd, &c, 1);
}
