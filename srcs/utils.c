/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 00:05:41 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/20 20:40:11 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	find_min(t_stack *stack)
{
	int	i;
	int	min_pos;

	i = 1;
	min_pos = 0;
	while (i < stack->size_a)
	{
		if (stack->a[i] < stack->a[min_pos])
			min_pos = i;
		i++;
	}
	return (min_pos);
}

void	split_duplicate(char **argv)
{
	int		i;
	int		j;
	char	**numbers;

	numbers = ft_split(argv[1], ' ');
	i = -1;
	while (numbers[++i])
	{
		j = i;
		while (numbers[++j])
			if (ft_atoi(numbers[i]) == ft_atoi(numbers[j]))
				ft_error();
		free(numbers[i]);
	}
	free(numbers);
}

void	check_duplicate(int argc, char **argv)
{
	int		i;
	int		j;
	int		num1;
	int		num2;

	if (argc == 2)
	{
		split_duplicate(argv);
		return ;
	}
	i = 1;
	while (i < argc)
	{
		num1 = ft_atoi(argv[i]);
		j = i + 1;
		while (j < argc)
		{
			num2 = ft_atoi(argv[j]);
			if (num1 == num2)
				ft_error();
			j++;
		}
		i++;
	}
}

void	check_character(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) || str[i] == ' '
			|| ((str[i] == '-' || str[i] == '+') && ft_isdigit(str[i + 1])))
			i++;
		else
			exit(1);
	}
}
