
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_node;

	last_node = NULL;
	while (!lst)
	{
		last_node = lst;
		lst = lst->next;
	}
	return (last_node);
}
