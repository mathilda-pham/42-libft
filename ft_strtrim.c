#include libft.h
#include <stdlib.h>
#include <sdio.h>
/*
Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.
Return value: The trimmed string. NULL if the allocation fails.  
 */

char *ft_strtrim(char const *s1, char const *set)
{
    char	*trimmed;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen((char *)s1) - 1;
	set_index = 0;

	if (!s1 || !set)
		return (NULL);
	while (s1[start] && start <= end)
	{
		while (set[set_index] != '\0')
		{
			if (s1[start] == set[set_index])
			{
				start++;
				set_index = 0;
			}
			else
				set_index++;
				
		}
	} 