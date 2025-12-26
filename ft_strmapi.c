#include "libft.h"
#include <unistd.h>
/*
Applies the function f to each character of the string s, passing its index
as the first argument and the character itself as the second. A new string
is created  (using malloc(3)) to store the results
from the successive application of f.
Return value: The string created from the successive applications of f.
NULL if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f((unsigned int)i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
