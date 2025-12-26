#include "libft.h"

/*
Takes a node as a parameter and frees its content using the function 'del'.
Frees the node itself (but not any following nodes).
Return value: none.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
