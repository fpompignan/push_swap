/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raddix_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fassier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:19:03 by fassier-          #+#    #+#             */
/*   Updated: 2022/01/19 11:31:31 by fassier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_push_swap.h"

void	ft_sort_tab(long tab[], int sort_tab[], int size)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	while (++i < size)
		sort_tab[i] = tab[i];
	i = 0;
	tmp = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (sort_tab[i] > sort_tab[j])
			{
				tmp = sort_tab[i];
				sort_tab[i] = sort_tab[j];
				sort_tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	index_tab(long tab[], int sort_tab[], int final_tab[], int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (sort_tab[j] != tab[i])
			j++;
		final_tab[i] = j;
		i++;
	}
}

int	calculate_size_b(int tab[], int size, int round)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < size)
	{
		if (((tab[i] >> round) & 1) == 0)
			count++;
		i++;
	}
	return (count);
}

void	split_tab(int tab[], int size, int round)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		if (((tab[i] >> round) & 1) == 0)
		{
			ft_putstr(1, "pb\n");
			j++;
		}
		else
		{
			ft_putstr(1, "ra\n");
			k++;
		}
		i++;
	}
}
