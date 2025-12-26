#include "libft.h"
#include <stdio.h>
/*The function checks whether the character c alphanumeric.
 
It returns:
1 (true) → if c is alphanumeric
0 (false) → otherwise
*/
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int c1 = 'A';
// 	int c2 = '5';
// 	int c3 = '#';

// 	printf("Is '%c' an alphanumeric character? %d\n", c1, ft_isalnum(c1));
// 	printf("Is '%c' an alphanumeric character? %d\n", c2, ft_isalnum(c2));
// 	printf("Is '%c' an alphanumeric character? %d\n", c3, ft_isalnum(c3));

// 	return (0);
// }

