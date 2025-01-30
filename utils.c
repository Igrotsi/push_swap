/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:39:19 by flahalle          #+#    #+#             */
/*   Updated: 2025/01/30 09:53:29 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		if (write(fd, &s[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	contains_duplicate(t_list *lst, int number)
{
	while (lst)
	{
		if (lst->number == number)
		{
			ft_putstr_fd("Error: duplicate numbers detected\n", 2);
			return (-1);
		}
		lst = lst->next;
	}
	return (0);
}

long	ft_atoi(const char *str)
{
	long	i;
	long	conv;
	long	result;

	i = 0;
	result = 0;
	conv = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			conv *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * conv);
}
