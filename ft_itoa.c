#include "libft.h"
#include <stdlib.h>
#include <stdio.h>	
/*
Allocated memory (using malloc(3)) and returns a string
representing the integer received as an argument. Negative numbers
must be handled.
Return value: The string representing the integer. NULL if the allocation fails.
*/


int	get_length(long number)
{
	int	length;

	length = 0;
	if (number <= 0)
	{
		length++;
		number = -number;
	}
	while (number > 0)
	{
		number = number / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*string;
	long	number;
	int		length;
	int		start;

	number = n;
	start = 0;
	length = get_length(n);
	string = (char *)malloc(length + 1);

	if (!string)
		return (NULL);
	if (n < 0)
	{
		string[0] = '-';
		number = -(long) n;
		start++;
	}
	string[length] = '\0';
	while (length > start)
	{
		string[--length] = (number % 10) + '0';
		number = number / 10;
	}
	return (string);
}

// int	main(void)
// {
// 	int num1 = -123;
// 	int num2 = 0;
// 	int num3 = 5678;

// 	printf("Integer: %d => String: %s\n", num1, ft_itoa(num1));
// 	printf("Integer: %d => String: %s\n", num2, ft_itoa(num2));
// 	printf("Integer: %d => String: %s\n", num3, ft_itoa(num3));

// 	return (0);
// }