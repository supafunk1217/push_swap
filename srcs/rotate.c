/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:22:28 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/05 17:42:58 by rcossett         ###   ########.fr       */
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
	stack->a[0] = stack_top;
	while (i < stack->size_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[0] = stack->size_a - 1;
	printf("ra\n");
}

void	rotate_b(t_stack *stack)
{
	int	i;
	int stack_top;

	if (stack->size_b < 2)
		return ;
	i = 0;
	stack->b[0] = stack_top;
	while (i < stack->size_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[0] = stack->size_b - 1;
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
