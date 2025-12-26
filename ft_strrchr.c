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

	while ((unsigned char)*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			last = s;
		s++;
	}
	if ((unsigned char)c == '\0')
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

// char    *ft_strrchr(const char *s, int c)
// {
//     const unsigned char *p;
//     const unsigned char *last;
//     unsigned char        uc;

//     if (!s)
//         return (NULL);

//     p = (const unsigned char *)s;
//     last = NULL;
//     uc = (unsigned char)c;

//     while (1)
//     {
//         if (*p == uc)
//             last = p;
//         if (*p == '\0')
//             break;
//         p++;
//     }
//     return ((char *)last);
// }

