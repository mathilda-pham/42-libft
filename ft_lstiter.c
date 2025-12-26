#include "libft.h"
#include <unistd.h>
/*
Iterates through the list 'lst' and applies the function 'f'
ti the content of each node.
Return value: none.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f((lst)->content);
		lst = (lst)->next;
	}
}
