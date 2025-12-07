#include "libft.h"
#include <stdio.h>	
/*
This funcrtion locates the last occurrence of c (converted to a char) in the string pointed to by s.
Return value: A pointer to the located character, or NULL if the character does not appear in
*/

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}

// int	main(void)
// {
// 	const char str[] = "Hello, World!";
// 	int ch = 'o';
// 	char *ret;

// 	ret = ft_strrchr(str, ch);

// 	printf("String after last '%c' is: %s\n", ch, ret);

// 	return 0;
// }
