/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 01:45:42 by flahalle          #+#    #+#             */
/*   Updated: 2025/01/31 16:20:38 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h> //pense a l'enlever
# include <stdlib.h>
# include <unistd.h>
typedef struct stacks
{
	int				number;
	int				index;
	struct stacks	*next;
}					t_list;
//
//
//----------------------------------Main-------------------------------------------------//
//
int					main(int ac, char **av);
//
//----------------------------------Manage lists-----------------------------------------//
//
t_list				*ft_lstnew(int nb);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				init_stack_a(t_list **stack_a, char **av, int ac);
t_list				*ft_lstlast(t_list *stack);
//
//----------------------------------Rotations values-------------------------------------//
//
void				swap(t_list *lst, char c);
void				push(t_list **pushed_into, t_list **pushed_out, char c);
void				ss(t_list *stack_a, t_list *stack_b);
void				rotate(t_list **stack, char c);
void				rr(t_list *stack_a, t_list *stack_b);
void				reverse_rotate(t_list **stack, char c);
void				rrr(t_list *stack_a, t_list *stack_b);
//
//----------------------------------Check errors & Utils----------------------------------//
//
int					contains_duplicate(t_list *lst, int number);
int					ft_strlen(const char *str);
int					ft_putstr_fd(char *s, int fd);
long				ft_atoi(const char *str);
void				free_stack(t_list *stack);
void	ft_lstclear(t_list **lst);

#endif
