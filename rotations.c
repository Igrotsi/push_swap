/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:52:18 by flahalle          #+#    #+#             */
/*   Updated: 2025/01/30 20:19:08 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *stack, char c)
{
	int	temp;

	if (!stack || !stack->next)
		return ;
	temp = stack->number;
	stack->number = stack->next->number;
	stack->next->number = temp;
	if (c == 'a')
		ft_putstr_fd("sa\n", 1);
	if (c == 'b')
		ft_putstr_fd("sb\n", 1);
}

void	push(t_list **pushed_into, t_list **pushed_out, char c)
{
	t_list	*new;
	t_list	*temp;
	if (!*pushed_out)
		return ;
	new = *pushed_out;
	temp = (*pushed_out)->next;
	ft_lstadd_front(pushed_into, new);
	*pushed_out = temp;
	if (c == 'a')
		ft_putstr_fd("pa\n", 1);
	if (c == 'b')
		ft_putstr_fd("pb\n", 1);
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	swap(stack_a, 'c');
	swap(stack_b, 'c');
	ft_putstr_fd("ss\n", 1);
}

void	rotate(t_list *stack, char c)
{
	t_list	*first;
	t_list	*last;

	if (!stack || !stack->next)
		return ;
	first = stack;
	last = ft_lstlast(stack);
	stack = stack->next;
	last->next = first;
	first->next = NULL;
	if (c == 'a')
		ft_putstr_fd("ra\n", 1);
	if (c == 'b')
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_list *stack_a, t_list *stack_b)
{
	rotate(stack_a, 'c');
	rotate(stack_b, 'c');
	ft_putstr_fd("rr\n", 1);
}
