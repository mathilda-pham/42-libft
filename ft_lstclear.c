#include "libft.h"
#include <unistd.h>
/*
Deletes and free the given node and all its successors, using the function 'del'
and free(3). Finally, set the pointer to the list to NULL.
Return value: none.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_current;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp_current = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp_current;
	}
	*lst = NULL;
}
