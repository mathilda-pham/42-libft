#include "libft.h"
/*
Converts an uppercase alphabetic character to lowercase.
Return value: The lowercase equivalent if input is uppercase.
Otherwise, the original character.
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
