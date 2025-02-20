/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:57:12 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/20 20:43:06 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_args(int argc, char *argv[])
{
	if (argc < 2)
		exit(0);
	if (argc == 2)
		check_character(argv[1]);
	check_duplicate(argc, argv);
}

int	main(int argc, char *argv[])
{	
	t_stack	*stack;
	int		stack_size;

	if (argc == 1)
		return (0);
	check_args(argc, argv);
	stack_size = count_numbers(argc, argv);
	stack = init_stack(stack_size);
	if (!stack)
		return (1);
	fill_stack(stack, argc, argv);
	create_index(stack);
	sort_stack(stack);
	free(stack->a);
	free(stack->b);
	free(stack);
	return (0);
}

// a faire : regarder les 3 dernier posts claude avec la checklist github, split_char et check_char