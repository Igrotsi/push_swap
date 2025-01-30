/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:52:18 by flahalle          #+#    #+#             */
/*   Updated: 2025/01/30 13:51:37 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	int	temp;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	temp = (*stack)->number;
	(*stack)->number = (*stack)->next->number;
	(*stack)->next->number = temp;
}

void	push(t_list **pushed_into, t_list **pushed_out)
{
	t_list	*new;
	t_list	*temp;

	if (!*pushed_out)
		return ;
	new = ft_stacknew((*pushed_out)->number);
	ft_stackadd_front(pushed_into, new);
	temp = *pushed_out;
	*pushed_out = (*pushed_out)->next;
	free(temp);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = ft_lstlast(*stack);
	*stack = (*stack)->next;
	last->next = first;
	first->next = NULL;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
