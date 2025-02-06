/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:10:56 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/06 17:22:54 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_stack *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->a[0];
	b = stack->a[1];
	c = stack->a[2];

	if (a > b && b > c) // cas 3 2 1
	{
		swap_a(stack);
		reverse_rotate_a(stack);
	}
	else if (a > b && b < c && a > c) // cas 3 1 2
		rotate_a(stack);
	else if (a > b && b < c && a < c) // cas 2 1 3 
		swap_a(stack);
	else if (a < b && b > c && a > c) // cas 2 3 1
		reverse_rotate_a(stack);
	else if (a < b && b > c && a < c) // cas 2 3 1
	{
		reverse_rotate_a(stack);
		swap_a(stack);
	}
}
