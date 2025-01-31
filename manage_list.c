/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:49:27 by flahalle          #+#    #+#             */
/*   Updated: 2025/01/31 05:11:37 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int nb)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->number = nb;
	elem->next = NULL;
	return (elem);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL)
		return ;
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

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

void	init_stack_a(t_list **stack_a, char **av, int ac)
{
	 t_list	*value;
	int		i;
	long		num;

	num = 0;
	i = 2;
	*stack_a = ft_lstnew(ft_atoi(av[1]));
	while (i < ac)
	{
		num = ft_atoi(av[i]);
		if (num > INT_MAX || num < INT_MIN)
		{
			ft_putstr_fd("Error: Enter numbers within integer min and max",
				2);
			EXIT_FAILURE ;
		}
		if (contains_duplicate(*stack_a, num) == -1)
			EXIT_FAILURE ;
		value = ft_lstnew(num);
		ft_lstadd_back(stack_a, value);
		i++;
	}
}

t_list	*ft_lstlast(t_list *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next)
	{
		stack = stack->next;
	}
	return (stack);
}
