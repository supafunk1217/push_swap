/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:21:19 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/20 18:44:13 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_stack(t_stack *stack)
{
	if (stack->size_a == 2)
	{
		if (stack->a[0] > stack->a[1])
			swap_a(stack);
	}
	if (stack->size_a == 3)
		sort_three(stack);
	if (stack->size_a == 4)
		sort_four(stack);
	if (stack->size_a == 5)
		sort_five(stack);
	else
		radix_sort(stack);
}

void	fill_stack(t_stack *stack, int argc, char **argv)
{
	int		i;
	char	**numbers;

	i = 0;
	if (argc == 2)
	{
		numbers = ft_split(argv[1], ' ');
		while (numbers[i])
		{
			stack->a[i] = ft_atoi(numbers[i]);
			i++;
		}
		while (i > 0)
			free(numbers[--i]);
		free(numbers);
	}
	else
	{
		while (i < stack->size_a)
		{
			stack->a[i] = ft_atoi(argv[i + 1]);
			i++;
		}
	}
}

t_stack	*init_stack(int size)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (stack == NULL)
		return (NULL);
	stack->size_a = size;
	stack->size_b = 0;
	stack->a = malloc(sizeof(int) * stack->size_a);
	stack->b = malloc(sizeof(int) * stack->size_a);
	if (stack->a == NULL || stack->b == NULL)
	{
		free(stack->a);
		free(stack->b);
		return (NULL);
	}
	return (stack);
}

int	count_numbers(int argc, char **argv)
{
	int		count;
	int		total;
	char	**numbers;

	if (argc == 2)
	{
		numbers = ft_split(argv[1], ' ');
		count = 0;
		while (numbers[count])
			count++;
		total = count;
		while (count > 0)
		{
			count--;
			free(numbers[count]);
		}
		free(numbers);
		return (total);
	}
	return (argc - 1);
}

void	create_index(t_stack *stack)
{
	int	i;
	int	j;
	int	count;
	int	*index_a;

	index_a = malloc(sizeof(int) * stack->size_a);
	if (!index_a)
		free(stack);
	i = -1;
	while (++i < stack->size_a)
	{
		count = 0;
		j = -1;
		while (++j < stack->size_a)
		{
			if (stack->a[i] > stack->a[j])
				count++;
		}
		index_a[i] = count;
	}
	i = -1;
	while (++i < stack->size_a)
		stack->a[i] = index_a[i];
	free(index_a);
}
