#include "libft.h"
#include <unistd.h>
/*
Adds the node 'new' at the end of the list.
Return value: none.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}

	last = ft_lstlast(*lst);
	last->next = new;
}
