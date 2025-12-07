#include "libft.h"

int	ft_isdigit(int c)
/*The function checks whether the character c is a number.
 
It returns:
1 (true) → if c is number
0 (false) → otherwise
*/
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int main(void)
{
	int c1 = '5';
	int c2 = 'a';

	printf("Is '%c' a digit? %d\n", c1, ft_isdigit(c1));
	printf("Is '%c' a digit? %d\n", c2, ft_isdigit(c2));

	return (0);
}
