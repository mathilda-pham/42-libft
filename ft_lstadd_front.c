#include "libft.h"
#include <unistd.h>
/*
Adds the node ’new’ at the beginning of the list.
Return value: None.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
