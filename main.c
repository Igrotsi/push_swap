/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 01:47:25 by flahalle          #+#    #+#             */
/*   Updated: 2025/01/30 09:53:04 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av, t_list **lst)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	stack_a = NULL;
	if (ac < 2)
	{
		ft_putstr_fd("Error: not enought arguments\n", 2);
		return (-1);
	}
	if (init_stack_a(&stack_a, **av, ac) == -1)
		return (-1);
	return (0);
}
