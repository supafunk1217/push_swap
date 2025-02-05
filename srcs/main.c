/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:57:12 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/05 18:25:26 by rcossett         ###   ########.fr       */
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

    printf("=== Début du programme ===\n");
    printf("argc = %d\n", argc);
    printf("argv[1] = %s\n", argv[1]);
	check_args(argc, argv);
	printf("=== Check args passé ===\n");
	stack_size = count_numbers(argc, argv); // compter combien de nombres nous avons
    printf("Stack size après count_numbers : %d\n", stack_size);
	stack = init_stack(stack_size); // init a la bonne taille
	printf("Stack size_a après init : %d\n", stack->size_a);
	if (!stack)
		return (1);
	fill_stack(stack, argc, argv); // remplir stack
	sort_stack(stack);
	printf("stack apres tri:\n");
	for (int i = 0; i < stack->size_a; i++)
        printf("a[%d] = %d\n", i, stack->a[i]);
	free(stack->a);
	free(stack->b);
	free(stack);
	return (0);
}

 // A FAIRE; CHECK LOGIQUE REVERSE_ROTATE DERNIERE CONVERSATION AVEC CLAUDE, TOUT LE FICHIER ROTATE VIENT DETRE COLLE