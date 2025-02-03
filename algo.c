/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:49:39 by flahalle          #+#    #+#             */
/*   Updated: 2025/02/03 16:48:43 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_inputs(t_list	**stack_a)
{
	if ((*stack_a)->number > (*stack_a)->next->number)
		swap(stack_a, 'a');
}

void	three_inputs(t_list	**stack_a, t_list	**stack_b)
{
	if ((*stack_a)->number > (*stack_a)->next->number)
		swap(stack_a, 'a');
	if ((*stack_a)->number > (*stack_a)->next->next->number)
		reverse_rotate(stack_a, 'a');
	if ((*stack_a)->next->number > (*stack_a)->next->next->number)
	{
		push(stack_b, stack_a, 'b');
		swap(stack_a, 'a');
		push(stack_a, stack_b, 'a');
	}	
}

// void	four_inputs(t_list *stack_a, t_list	*stack, char **av)
// {
// 	if ()
// }

// void	five_inputs()
