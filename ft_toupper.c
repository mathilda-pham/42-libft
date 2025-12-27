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
// int main(void)
// {
// 	char lower = 'b';
// 	char upper = ft_toupper(lower);
// 	printf("Original: %c, Uppercase: %c\n", lower, upper);
// 	return 0;
// }
