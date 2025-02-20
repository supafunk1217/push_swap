/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:23:29 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/14 17:38:24 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_a(t_stack *stack)
{
	int	i;
	int	temp;

	if (!stack->size_b)
		return ;
	i = 0;
	temp = stack->b[0];
	stack->a[0] = temp;
	while (i < stack->size_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->size_b--;
	stack->size_a++;
	printf("pa\n");
}

void	push_b(t_stack *stack)
{
	int	i;
	int	temp;

	if (!stack->size_a)
		return ;
	i = 0;
	temp = stack->a[0];
	stack->b[0] = temp;
	while (i < stack->size_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->size_a--;
	stack->size_b++;
	printf("pb\n");
}
