#include "libft.h"
#include <unistd.h>
/*
Iterates through the list ’lst’, applies the function ’f’ to each node’s content,
and creates a new list resulting of the successive applications
of the function ’f’. The ’del’ function is used to delete the content
of a node if needed.
Return value: new list.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		content = f((lst)->content);
		new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = (lst)->next;
		ft_lstadd_back(&new_list, new_node);
	}
	return (new_list);
}
