/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:57:12 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/11 15:00:35 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_args(int argc, char *argv[])
{
	printf("entree check args\n");
	if (argc < 2)
		exit(1);
	if (argc == 2)
	{
		check_character(argv[1]);
		check_duplicate(argc, argv);
	}
	printf("sortie check args\n");
	return ;
}

int	main(int argc, char *argv[])
{	
	t_stack	*stack;
	int		stack_size;

	check_args(argc, argv);
	stack_size = count_numbers(argc, argv); // compter combien de nombres nous avons
	stack = init_stack(stack_size); // init a la bonne taille
	if (!stack)
		return (1);
	fill_stack(stack, argc, argv); // remplir stack
	sort_stack(stack);
	free(stack->a);
	free(stack->b);
	free(stack);
	return (0);
}

 // A FAIRE; message d'erreur pour doublons (check_duplicate etc), sort four et five, radix. check conv claude