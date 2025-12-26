#include "libft.h"
#include <unistd.h>
/*
Returns the last node of the list. 
Return value: The last node of the list.
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
