/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flahalle <flahalle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 01:45:42 by flahalle          #+#    #+#             */
/*   Updated: 2025/01/27 14:20:50 by flahalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H	

typedef struct Stacks
{
	int						number;
	struct	Stacks			*next;
}							list;

list	*ft_lstnew(void *content);

#include <stdlib.h>

#endif
