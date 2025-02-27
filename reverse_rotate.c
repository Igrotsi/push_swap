/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:17:50 by flahalle          #+#    #+#             */
/*   Updated: 2025/01/31 16:21:51 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack, char c)
{
	t_list	*second_to_last;
	t_list	*last;

	if (!stack || !(*stack)->next)
		return ;
	second_to_last = (*stack);
	while (second_to_last->next && second_to_last->next->next)
		second_to_last = second_to_last->next;
	last = second_to_last->next;
	second_to_last->next = NULL;
	last->next = (*stack);
	(*stack) = last;
	if (c == 'a')
		ft_putstr_fd("rra\n", 1);
	if (c == 'b')
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_list *stack_a, t_list *stack_b)
{
	reverse_rotate(&stack_a, 'c');
	reverse_rotate(&stack_b, 'c');
	ft_putstr_fd("rrr\n", 1);
}
