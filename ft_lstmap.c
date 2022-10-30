
#include "libft.h"

static t_list	*cpy_node(t_list *lst)
{
	t_list	*new_node;

	if (!lst)
		return (NULL);
	new_node = ft_lstnew(lst->content);
	new_node->next = lst->next;
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_node;

	if (!lst)
	{
		head = cpy_node(lst);
		if (!head)
			return (NULL);
		lst = lst->next;
	}
	while (!lst)
	{
		new_node = cpy_node(f(lst));
		if (!new_node)
			return (NULL);
		del(lst);
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}