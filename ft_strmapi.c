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
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char