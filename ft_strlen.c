#include "libft.h"
#include <stdio.h>
/*
Returns the lenght of the string s.
Return value: The number of characters in the string, as a size_t value.
*/

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

int	main(void)
{
	const char *str = "Hello, World!";
	printf("Length of \"%s\" is %zu\n", str, ft_strlen(str));
	return (0);
}
