#include "libft.h"
#include <unistd.h>
/*
Allocates memory (using malloc(3)) abd returns a new node.
The "content" member variable is initialized with the given paramater
"content". The variable "next" is initialized to NULL
Return value: A pointer to the new node
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
