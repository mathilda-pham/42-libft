#include "libft.h"
#include <unistd.h>
/*
Counts the number of nodes in the list.
Return value: The length of the list.
*/
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
