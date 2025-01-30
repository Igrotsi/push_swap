/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 01:45:42 by flahalle          #+#    #+#             */
/*   Updated: 2025/01/30 10:41:03 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>

typedef struct stacks
{
	int				number;
	int				index;
	struct stacks	*next;
}					t_list;

//									Main
int					main(int ac, char **av, t_list **lst);
//									Manage lists
t_list				*ft_lstnew(int nb);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
int					init_stack_a(t_list **stack_a, char **av, int ac);
t_list				*ft_lstlast(t_list **stack);
//									Rotations values
void				swap(t_list **lst);
//									Check errors & Utils
int					contains_duplicate(t_list *lst, int number);
int					ft_strlen(const char *str);
int					ft_putstr_fd(char *s, int fd);
long				ft_atoi(const char *str);

#endif
