/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fassier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:23:27 by fassier-          #+#    #+#             */
/*   Updated: 2022/01/19 14:38:01 by fassier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_push_swap.h"

void	sort_big_stack(int argc, long tab[], int round)
{
	int		*sort_tab;
	int		*final_tab;
	int		*liste_a;
	int		*liste_b;
	int		size_b;

	sort_tab = malloc(sizeof(int) * (argc - 1));
	final_tab = malloc(sizeof(int) * (argc - 1));
	if (!sort_tab || !final_tab)
		exit(0);
	ft_sort_tab(tab, sort_tab, argc -1);
	index_tab(tab, sort_tab, final_tab, argc - 1);
	while (round < count_byte(argc - 1))
	{
		liste_b = fill_liste_b(final_tab, argc - 1, &size_b, round);
		liste_a = fill_liste_a(final_tab, argc - 1, &size_b, round);
		split_tab(final_tab, argc - 1, round);
		fusion1(final_tab, liste_b, size_b);
		fusion2(final_tab, argc - 1, liste_a, size_b);
		round++;
	}
	free(sort_tab);
	free(final_tab);
}

void	sort_small_stack(int argc, long tab[])
{
	if (argc - 1 == 2)
		ft_putstr(1, "sa\n");
	if (argc - 1 == 3)
		sort_3_nbs(tab);
	if (argc -1 == 4)
		sort_4_nbs(tab);
	if (argc - 1 == 5)
		sort_5_nbs(tab);
}

int	check_is_sorted(long tab[], int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	long	*tab;
	int		round;

	round = 0;
	tab = malloc(sizeof(long) * (argc - 1));
	if (tab == NULL || argc == 1)
		return (0);
	if (!check(argv, tab, argc - 1))
	{
		ft_putstr(2, "Error\n");
		free(tab);
		return (0);
	}
	if (check_is_sorted(tab, argc - 1))
	{
		free(tab);
		return (0);
	}
	if (argc - 1 > 5)
		sort_big_stack(argc, tab, round);
	else
		sort_small_stack(argc, tab);
	free(tab);
	return (0);
}
