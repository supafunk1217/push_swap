/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcossett <rcossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 00:05:41 by rcossett          #+#    #+#             */
/*   Updated: 2025/02/06 17:26:01 by rcossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_duplicate(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			{
				printf("Error: duplicate numbers found.\n");
				exit(1);
			}
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
	printf("=== Sortie de check_character ===\n");
}
