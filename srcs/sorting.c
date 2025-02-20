/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:10:56 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/20 18:44:02 by rcossett         ###   ########.fr       */
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
	if (a > b && b > c)
	{
		swap_a(stack);
		reverse_rotate_a(stack);
	}
	else if (a > b && b < c && a > c)
		rotate_a(stack);
	else if (a > b && b < c && a < c)
		swap_a(stack);
	else if (a < b && b > c && a > c)
		reverse_rotate_a(stack);
	else if (a < b && b > c && a < c)
	{
		reverse_rotate_a(stack);
		swap_a(stack);
	}
}

void	sort_four(t_stack *stack)
{
	int	min_pos;

	min_pos = find_min(stack);
	if (1 == min_pos)
		swap_a(stack);
	if (2 == min_pos)
	{
		rotate_a(stack);
		rotate_a(stack);
	}
	if (3 == min_pos)
		reverse_rotate_a(stack);
	push_b(stack);
	sort_three(stack);
	push_a(stack);
}

void	sort_five(t_stack *stack)
{
	int	min_pos;

	while (stack->size_a > 3)
	{
		min_pos = find_min(stack);
		if (1 == min_pos)
			rotate_a(stack);
		else if (2 == min_pos)
		{
			rotate_a(stack);
			rotate_a(stack);
		}
		else if (min_pos > 2)
		{
			while (min_pos++ < stack->size_a)
				reverse_rotate_a(stack);
		}
		push_b(stack);
	}
	sort_three(stack);
	push_a(stack);
	push_a(stack);
}

void	radix_sort(t_stack *stack)
{
	int	i;
	int	j;
	int	max_bits;
	int	size;

	max_bits = 0;
	while (((stack->size_a - 1) >> max_bits) != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		size = stack->size_a;
		while (++j < size)
		{
			if (((stack->a[0] >> i) & 1) == 1)
				rotate_a(stack);
			else
				push_b(stack);
		}
		while (stack->size_b > 0)
			push_a(stack);
	}
}
