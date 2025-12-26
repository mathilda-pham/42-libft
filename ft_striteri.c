#include "libft.h"
#include <unistd.h>
/*
Applies the function f to each charactetr of the string passed
as argument, passing its index as the first argument. Each character is passed
by address to f so it can be modified if necessary.
Return value: None.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	len;

	if (!s || !f)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}
