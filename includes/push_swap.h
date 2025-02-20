/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:54:35 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/20 20:04:40 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "../includes/libft/includes/libft.h" 

typedef struct s_stack
{
	int			*a;
	int			*b;
	int			size_a;
	int			size_b;
}				t_stack;

int				count_numbers(int argc, char **argv);
t_stack			*init_stack(int argc);
void			create_index(t_stack *stack);
void			fill_stack(t_stack *stack, int argc, char **argv);
void			sort_stack(t_stack *stack);
void			check_character(char *str);
void			check_duplicate(int argc, char **argv);
int				find_min(t_stack *stack);
void			swap_a(t_stack *stack);
void			swap_b(t_stack *stack);
void			swap_both(t_stack *stack);
void			push_a(t_stack *stack);
void			push_b(t_stack *stack);
void			rotate_a(t_stack *stack);
void			rotate_b(t_stack *stack);
void			rotate_both(t_stack *stack);
void			reverse_rotate_a(t_stack *stack);
void			reverse_rotate_b(t_stack *stack);
void			reverse_rotate_both(t_stack *stack);
void			sort_three(t_stack *stack);
void			sort_four(t_stack *stack);
void			sort_five(t_stack *stack);
void			radix_sort(t_stack *stack);

#endif