/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:57:45 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/06 16:59:44 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_stack *stack)
{
	int	temp;

	if (stack->size_a < 2)
		return ;
	temp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = temp;
	printf("sa\n");
}

void	swap_b(t_stack *stack)
{
	int	temp;

	if (stack->size_b < 2)
		return ;
	temp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = temp;
	printf("sb\n");
}

void	swap_both(t_stack *stack)
{
	if (stack->size_a < 2 || stack->size_b < 2)
		return ;
	swap_a(stack);
	swap_b(stack);
	printf("ss\n");
}

void	push_a(t_stack *stack)
{
	int	i;
	int	temp;

	if (!stack->size_b)
		return ;
	i = 0;
	temp = stack->b[0];					// sauvegarde premier de B
	stack->a[0] = temp;					// on le met au debut de A
	while (i < stack->size_b - 1)		// on decale les elements de B d'une position vers la gauche pour "combler le trou" de l'element deplace
	{
		stack->b[i] = stack->b[i + 1];	// si [7, 8, 9]: i = 0 : B[0] = B[1] // [8, 8, 9] (7 est remplacé par 8)
		i++;
	}
	stack->size_b--; 					// on doit ajuster manuellement la taille des tableau; B perd un element quand A en gagne un
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
