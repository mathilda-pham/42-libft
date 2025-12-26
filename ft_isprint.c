#include "libft.h"
/*
The function checks whether the character c is printable,
 including letters, digits, punctuation, and space.
 
 It returns:
 1 (true) → if c is printable
 0 (false) → otherwise
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int c1 = 'A';
// 	int c2 = ' ';
// 	int c3 = '\n';

// 	printf("Is '%c' a printable character? %d\n", c1, ft_isprint(c1));
// 	printf("Is '%c' a printable character? %d\n", c2, ft_isprint(c2));
// 	printf("Is '\\n' a printable character? %d\n", ft_isprint(c3));

// 	return (0);
// }
