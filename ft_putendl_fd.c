#include "libft.h"
#include <unistd.h>
/*
Outputs the string 's' to the specified file descriptor, followed by a newline.
Return value: None.
*/
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
