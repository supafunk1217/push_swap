/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 00:05:41 by rcossett          #+#    #+#             */
/*   Updated: 2025/01/24 14:42:27 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	get_stack_size(t_stack *stack)
{

}

int	get_operations_cost(t_stack *stack, int value)
{
	int	position;
	int	stack_size;

	if (!stack || !stack->top)
		return (NULL);
	position = find_position();
	stack_size = get_stack_size(stack);
	
}

t_node	*find_smallest_value(t_stack *stack)
{
	t_node	*current;
	t_node	*smallest;

	if (!stack || !stack->top)
		return (NULL);
	current = stack->top;
	smallest = current;
	while (current)
	{
		if (current->value < smallest->value)
			smallest = current;
		current = current->next;
	}
	return (smallest);
}