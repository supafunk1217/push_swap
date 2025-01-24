/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:57:12 by rcossett          #+#    #+#             */
/*   Updated: 2025/01/24 14:41:10 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	find_node(t_stack *stack, int to_find)
{
	t_node	*current;
	int		position;

	if (!stack || stack->top)
		return (-1);				// -1 pour retour erreur
	current = stack->top;
	position = 0;
	while (stack)					// tant qu'on itere dans stack
	{
		if (current == to_find)		// si character est identique a to_find
			return (position);		// on retourne position dans la stack
		current = current ->next;	// on passe a la prochaine position avec next
		position++;					// on incremente position pour actualiser le compte
	}
	return (-1);
}

t_node	*create_node(int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

void	check_args(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 3)
	{
		if (argv[1][i] != || argv[2][i] != )
			printf("Error: enter numbers.\n");
	}
}

void	init_stack(t_stack *stack)
{
	check_args();
}

int	main(void)
{	
	init_stack();
	//check_args();
	init_visualizer;
	find_smallest_value;



	free (stack);
}