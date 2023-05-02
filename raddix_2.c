/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raddix_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fassier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:35:57 by fassier-          #+#    #+#             */
/*   Updated: 2022/01/19 11:44:42 by fassier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_push_swap.h"

int	*fill_liste_a(int tab[], int size, int *size_B, int round)
{
	int	*result;
	int	i;
	int	k;

	result = malloc(sizeof(int) * (size - *size_B));
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		if (((tab[i] >> round) & 1) == 1)
		{
			result[k] = tab[i];
			k++;
		}
		i++;
	}
	return (result);
}

int	*fill_liste_b(int tab[], int size, int *size_B, int round)
{
	int	*result;
	int	i;
	int	j;

	*size_B = calculate_size_b(tab, size, round);
	result = malloc(sizeof(int) * *size_B);
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		if (((tab[i] >> round) & 1) == 0)
		{
			result[j] = tab[i];
			j++;
		}
		i++;
	}
	return (result);
}

void	fusion1(int *tab, int *liste_B, int size_B)
{
	int	i;

	i = 0;
	while (i < size_B)
	{
		tab[i] = liste_B[i];
		ft_putstr(1, "pa\n");
		i++;
	}
	free(liste_B);
}

void	fusion2(int *tab, int size, int *liste_A, int size_B)
{
	int	i;
	int	j;

	i = size_B;
	j = 0;
	while (i < size)
	{
		tab[i] = liste_A[j];
		i++;
		j++;
	}
	free(liste_A);
}
