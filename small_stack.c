/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fassier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:56:20 by fassier-          #+#    #+#             */
/*   Updated: 2022/01/19 13:42:57 by fassier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_push_swap.h"

void	sort_3_nbs(long tab[])
{
	if (tab[0] > tab[1] && tab[1] < tab[2] && tab[0] < tab[2])
		ft_putstr(1, "sa\n");
	if (tab[0] > tab[1] && tab[1] > tab[2] && tab[0] > tab[2])
	{
		ft_putstr(1, "sa\n");
		ft_putstr(1, "rra\n");
	}
	if (tab[0] > tab[1] && tab[1] < tab[2] && tab[0] > tab[2])
		ft_putstr(1, "ra\n");
	if (tab[0] < tab[1] && tab[1] > tab[2] && tab[0] < tab[2])
	{
		ft_putstr(1, "sa\n");
		ft_putstr(1, "ra\n");
	}
	if (tab[0] < tab[1] && tab[1] > tab[2] && tab[0] > tab[2])
		ft_putstr(1, "rra\n");
}

void	sort_4_nbs(long tab[])
{
	long	small_tab[3];
	int		sort_small_tab[3];

	small_tab[0] = tab[1];
	small_tab[1] = tab[2];
	small_tab[2] = tab[3];
	ft_putstr(1, "pb\n");
	sort_3_nbs(small_tab);
	ft_sort_tab(small_tab, sort_small_tab, 3);
	ft_putstr(1, "pa\n");
	if (tab[0] > sort_small_tab[2])
		ft_putstr(1, "ra\n");
	if (tab[0] > sort_small_tab[0] && tab[0] < sort_small_tab[1])
		ft_putstr(1, "sa\n");
	if (tab[0] > sort_small_tab[1] && tab[0] < sort_small_tab[2])
	{
		ft_putstr(1, "rra\n");
		ft_putstr(1, "sa\n");
		ft_putstr(1, "ra\n");
		ft_putstr(1, "ra\n");
	}
}

void	simplification(long tab[], long small_tab[])
{
	int	sort_small_tab[3];

	small_tab[0] = tab[2];
	small_tab[1] = tab[3];
	small_tab[2] = tab[4];
	ft_putstr(1, "pb\npb\n");
	sort_3_nbs(small_tab);
	ft_sort_tab(small_tab, sort_small_tab, 3);
	if (tab[1] < sort_small_tab[0])
		ft_putstr(1, "pa\n");
	if (tab[1] > sort_small_tab[2])
		ft_putstr(1, "pa\nra\n");
	if (tab[1] > sort_small_tab[0] && tab[1] < sort_small_tab[1])
		ft_putstr(1, "pa\nsa\n");
	if (tab[1] > sort_small_tab[1] && tab[1] < sort_small_tab[2])
		ft_putstr(1, "rra\npa\nra\nra\n");
}

void	sort_5_nbs(long tab[])
{
	long	small_tab[3];
	long	middle_tab[4];
	int		sort_middle_tab[4];

	simplification(tab, small_tab);
	middle_tab[0] = tab[1];
	middle_tab[1] = tab[2];
	middle_tab[2] = tab[3];
	middle_tab[3] = tab[4];
	ft_sort_tab(middle_tab, sort_middle_tab, 4);
	if (tab[0] < sort_middle_tab[0])
		ft_putstr(1, "pa\n");
	if (tab[0] > sort_middle_tab[3])
		ft_putstr(1, "pa\nra\n");
	if (tab[0] > sort_middle_tab[0] && tab[0] < sort_middle_tab[1])
		ft_putstr(1, "pa\nsa\n");
	if (tab[0] > sort_middle_tab[1] && tab[0] < sort_middle_tab[2])
		ft_putstr(1, "ra\npa\nsa\nrra\n");
	if (tab[0] > sort_middle_tab[2] && tab[0] < sort_middle_tab[3])
		ft_putstr(1, "rra\npa\nra\nra\n");
}
