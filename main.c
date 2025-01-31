/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 01:47:25 by flahalle          #+#    #+#             */
/*   Updated: 2025/01/31 16:50:52 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*temp_a;
	t_list	*temp_b;

	
	stack_a = NULL;
	stack_b = NULL;
	if (ac < 3)
	{
		ft_putstr_fd("Error: not enough arguments\n", 2);
		return (-1);
	}
	init_stack_a(&stack_a, av, ac);
	// swap(stack_a, 'a');
	push(&stack_b, &stack_a, 'b');
	push(&stack_b, &stack_a, 'b');
	push(&stack_b, &stack_a, 'b');
	temp_a = stack_a;
	temp_b = stack_b;
	while (temp_a)
	{
		printf("a : %d\n", temp_a->number);
		temp_a = temp_a->next;
	}
	while (temp_b)
	{
		printf("b : %d\n", temp_b->number);
		temp_b = temp_b->next;
	}
	// push(&stack_b, &stack_a, 'b');
	// swap(stack_b, 'b');
	// rotate(&stack_a, 'a');
	// temp_a = stack_a;
	// while (temp_a)
	// {
	// 	printf("ra : %d\n", temp_a->number);
	// 	temp_a = temp_a->next;
	// }
	// reverse_rotate(&stack_a, 'a');
	// temp_a = stack_a;
	// while (temp_a)
	// {
	// 	printf("rra : %d\n", temp_a->number);
	// 	temp_a = temp_a->next;
	// }
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
