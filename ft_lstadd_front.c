/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgonca <pedgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:42:48 by pedgonca          #+#    #+#             */
/*   Updated: 2022/10/31 12:43:12 by pedgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (*lst != NULL)
		new->next = *lst;
	*lst = new;
}

/* int main()
{
	t_list **lst = malloc(5 * sizeof(t_list*));
	int i;
	int *cont;
	int *node_content;
	int *next_content;

	for (i = 0; i < 4; i++)
	{
		lst[i] = malloc(sizeof(t_list));
		cont = malloc(sizeof(int));
		*cont = i + 1;
		lst[i]->content = (int *) cont;
		lst[i]->next = NULL;
		if (i > 0)
			lst[i-1]->next = lst[i];
		if (i == 3)
			lst[i]->next = NULL;
	}
	lst[i] = NULL;
	
	assert(*lst != NULL);
	printf("lst created\n");
	i = 0;
	while (lst[i] != NULL)
	{
		node_content = (int *) lst[i]->content;
		printf("node: %d\n", *node_content);
		if (lst[i]->next != NULL)
		{
			next_content = (int *) (lst[i]->next)->content;
			printf("next node: %d\n", *next_content);
		}
		i++;
	}
	t_list *new = malloc(sizeof(t_list));
	int new_content = 0;
	new->content = (int *) &new_content;

	ft_lstadd_front(lst, new);
	printf("-----\n");
	i = 0;
	while (lst[i] != NULL)
	{
		node_content = (int *) lst[i]->content;
		printf("node: %d\n", *node_content);
		if (lst[i]->next != NULL)
		{
			next_content = (int *) (lst[i]->next)->content;
			printf("next node: %d\n", *next_content);
		}
		i++;
	}

	for (i = 0; i < 6; i++)
		free(lst[i]);
	free(lst);
} */