/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:43:37 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/06 16:15:57 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate_a(t_stack *stack)
{
	int	i;
	int stack_bottom;								// pour dernier element

	if (stack->size_a < 2)							// si il y a moins de deux elements dans la stack, rien a trier
		return ;
	stack_bottom = stack->a[stack->size_a - 1];		// on assigne la derniere case du tableau a stack_bottom
	i = stack->size_a - 1;							// on place i en bas de la chaine pour parcourir depuis le bas
	while (i > 0)									// tant que i n'est pas revenu au debut
	{
		stack->a[i] = stack->a[i - 1];				// on assigne a[i] a la derniere valeur pour faire remonter
		i--;
	}
	stack->a[0] = stack_bottom;						// on place le premier a la fin
	printf("rra\n");
}

void	reverse_rotate_b(t_stack *stack)
{
	int	i;
	int stack_bottom;

	if (stack->size_b < 2)
		return ;
	stack_bottom = stack->b[stack->size_b - 1];
	i = stack->size_b - 1;
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = stack_bottom;
	printf("rrb\n");
}

void	reverse_rotate_both(t_stack *stack)
{
	if (stack->size_a < 2 || stack->size_b < 2)
		return ;
	reverse_rotate_a(stack);
	reverse_rotate_b(stack);
	printf("rrr\n");
}