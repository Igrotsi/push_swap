/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 01:47:25 by flahalle          #+#    #+#             */
/*   Updated: 2025/01/27 16:03:07 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

list	*ft_lstnew_a(void *content)
{
	list	*elem;

	elem = malloc(sizeof(list));
	if (!elem)
		return (NULL);
	elem->number = content;
	elem->next = NULL;
	return (elem);
}

void	ft_lstadd_front_a(list **lst, list *new)
{
	if (lst == NULL)
		return ;
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
void	ft_lstadd_back_a(list **lst, list *new)
{
	list	*temp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
}

void	ft_lstdelone_a(list *lst, void (*del)(void *))
{
	if (lst != NULL)
	{
		if (del != NULL)
			del(lst->number);
		free(lst);
	}
}

void	ft_lstclear_a(list **lst, void (*del)(void *))
{
	list	*temp;

	temp = *lst;
	if (lst == NULL)
		return ;
	if (del == NULL)
		return ;
	while (temp)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
void	swap_a(list **lst)
{
	int	temp;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	temp = (*lst)->number;
	(*lst)->number = (*lst)->next->number;
	(*lst)->next->number = temp;
}

void	push_front(list **lst, int number)
{
	list	*new_node;

	new_node = (list *)malloc(sizeof(list));
	if (new_node)
	{
		new_node->number = number;
		new_node->next = *lst;
		*lst = new_node;
	}
}
