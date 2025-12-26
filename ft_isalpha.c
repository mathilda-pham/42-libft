#include "libft.h"

int	ft_isalpha(int c)
/*
The function checks whether the character c is a letter,
either uppercase or lowercase.

It returns:
1 (true) → if c is alphabetic
0 (false) → otherwise
*/
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	c1 = 'A';
// 	int	c2 = 'm';
// 	int	c3 = '5';

// 	printf("Is '%c' an alphabetic character? %d\n", c1, ft_isalpha(c1));
// 	printf("Is '%c' an alphabetic character? %d\n", c2, ft_isalpha(c2));
// 	printf("Is '%c' an alphabetic character? %d\n", c3, ft_isalpha(c3));

// 	return (0);
// }
