/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:54:35 by rcossett          #+#    #+#             */
/*   Updated: 2025/01/24 15:43:20 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "../includes/libft/includes/libft.h" 

#endif

typedef struct		s_node
{
	int				value;
	int				position;
	struct s_node	*next;
}					t_node;

typedef struct		s_stack
{
	t_node			*top;
	t_node			*bottom;
	int				size;
}					t_stack;

// PROTOTYPES

t_node				*find_smallest_value(t_stack *stack);

