#include "libft.h"

/*
The function compares up to n characters of the string
s1 to those of the string s2.
Return value:
An integer less than, equal to, or greater than zero if s1
(or the first n bytes thereof)
is found, respectively, to be less than, to match, or be greater than s2.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && (i < n - 1) && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main(void)
// {
// 	const char *str1 = "Hello, World!";
// 	const char *str2 = "Hella, World!";
// 	size_t n = 5;

// 	int result = ft_strncmp(str1, str2, n);
// 	printf("Comparison result: %d\n", result);

// 	return 0;
// }
