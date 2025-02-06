/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:22:28 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/06 16:06:33 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_stack *stack)
{
	int	i;
	int stack_top;

	if (stack->size_a < 2)
		return ;
	i = 0;
	stack_top = stack->a[0];					// on sauvegarde le premier element
	while (i < stack->size_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[stack->size_a - 1] = stack_top;	// place le premier a la fin
	printf("ra\n");
}

void	rotate_b(t_stack *stack)
{
	int	i;
	int stack_top;

	if (stack->size_b < 2)
		return ;
	i = 0;
	stack_top = stack->b[0];
	while (i < stack->size_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[stack->size_b - 1] = stack_top;
	printf("rb\n");
}

void	rotate_both(t_stack *stack)
{
	if (stack->size_a < 2 || stack->size_b < 2)
		return ;
	rotate_a(stack);
	rotate_b(stack);
	printf("rr\n");
}
