#include "libft.h"
/*
Converts an lowercase alphabetic character to uppercase.
Return value: The uppercase equivalent if input is lowercase.
Otherwise, the original character.
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
