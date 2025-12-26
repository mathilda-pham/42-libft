#include "libft.h"
#include <stdio.h>
/*The function checks whether the character c in an ascii character range.
 
It returns:
1 (true) → if c is ascii
0 (false) → otherwise
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int c1 = 65;
// 	int c2 = 200;

// 	printf("Is %d an ASCII character? %d\n", c1, ft_isascii(c1));
// 	printf("Is %d an ASCII character? %d\n", c2, ft_isascii(c2));

// 	return (0);
// }

