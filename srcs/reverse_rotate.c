/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:43:37 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/05 18:12:00 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate_a(t_stack *stack)
{
	int	i;
	int stack_bottom;								// pour dernier element

	if (stack->size_a < 2)							// 
		return ;
	stack_bottom = stack->a[stack->size_a - 1];		//
	i = stack->size_a - 1;							//
	while (i < stack->size_a - 1)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[stack->size_a - 1] = stack->a[0];
	printf("rra\n");
}

void	reverse_rotate_b(t_stack *stack)
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

void	reverse_rotate_both(t_stack *stack)
{
	if (stack->size_a < 2 || stack->size_b < 2)
		return ;
	rotate_a(stack);
	rotate_b(stack);
	printf("rr\n");
}