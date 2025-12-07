#include "libft.h"
#include <unistd.h>
/*
Outputs the string 's' to the specified file descriptor.
Return value: None.
*/
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}
