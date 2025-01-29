/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 01:47:25 by flahalle          #+#    #+#             */
/*   Updated: 2025/01/29 20:22:51 by flahalle         ###   ########.fr       */
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

list	*ft_lstnew(int nb)
{
	list	*elem;

	elem = malloc(sizeof(list));
	if (!elem)
		return (NULL);
	elem->number = nb;
	elem->next = NULL;
	return (elem);
}

void	ft_lstadd_front(list **lst, list *new)
{
	if (lst == NULL)
		return ;
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

void	ft_lstadd_back(list **lst, list *new)
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

void	swap(list **lst)
{
	int	temp;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	temp = (*lst)->number;
	(*lst)->number = (*lst)->next->number;
	(*lst)->next->number = temp;
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
int	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		if(write(fd, &s[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}

int contains_duplicate(list *lst, int number)
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
    return 0;
}

int init_stack_a(list **stack_a, char **av, int ac)
{
	list	*value;
	int i;
	int num;

	num = 0;
	i = 1;
	while (i < ac)
	{
		num = ft_atoi(av[i]);
		if (num > INT_MAX || num < INT_MIN)
		{
			ft_putstr_fd("Error: Please enter arguments within integer min and max", 2);
			return (-1);
		}
		if (contains_duplicate(*stack_a, num) == -1)
            return (-1);
		value = ft_lstnew(num);
		ft_lstadd_back(stack_a, value);
		i++;
	}
	return (0);
}

int	main(int ac, char **av, list **lst)
{
	list	*stack_a;
	
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
