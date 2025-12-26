#include "libft.h"

int	ft_atoi(const char *str)
/*
The function converts a string to an integer.
Return value: The converted integer value.
*/
{
	int		i;
	int		sign;
	long	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(sign * number));
}
// int	main(void)
// {
// 	const char	*str1 = "   -1234abc";
// 	const char	*str2 = "42 is the answer";
// 	const char	*str3 = "   +0xyz";
// 	printf("String: \"%s\" => Integer: %d\n", str1, ft_atoi(str1));
// 	printf("String: \"%s\" => Integer: %d\n", str2, ft_atoi(str2));
// 	printf("String: \"%s\" => Integer: %d\n", str3, ft_atoi(str3));
// 	return (0);
// }
