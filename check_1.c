/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fassier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:28:47 by fassier-          #+#    #+#             */
/*   Updated: 2022/01/17 18:45:02 by fassier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_push_swap.h"

int	check_if_number(char **liste, int size)
{
	int	i;

	i = 1;
	while (i <= size)
	{
		if (!is_number(liste[i]))
			return (0);
		i++;
	}
	return (1);
}

void	fill_tab(long tab[], int size, char **argv)
{
	int	i;

	i = 0;
	while (i < size)
	{
		tab[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}

int	check_size_number(long tab[], int size)
{
	int	i;

	i = 0;
	while (i < size && tab[i] >= -2147483648 && tab[i] <= 2147483647)
		i++;
	if (i == size)
		return (1);
	else
		return (0);
}

int	check_doublon(long tab[], int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check(char **argv, long tab[], int size)
{
	if (!check_if_number(argv, size))
		return (0);
	fill_tab(tab, size, argv);
	if (!check_size_number(tab, size))
		return (0);
	if (!check_doublon(tab, size))
		return (0);
	return (1);
}
