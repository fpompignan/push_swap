/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fassier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:32:51 by fassier-          #+#    #+#             */
/*   Updated: 2022/01/17 18:32:17 by fassier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/ft_push_swap.h"

void	ft_write(int sortie, char c)
{
	write (sortie, &c, 1);
}

void	ft_putstr(int sortie, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_write(sortie, str[i]);
		i++;
	}
}

long	ft_atoi(const char *nptr)
{
	int		i;
	int		negative;
	long	result;

	i = 0;
	negative = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-')
	{
		negative = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (10 * result) + (nptr[i] - 48);
		i++;
	}
	return (result * negative);
}

int	count_byte(int nb)
{
	int	i;

	i = 0;
	while (((nb >> (31 - i)) & 1) == 0)
		i++;
	return (32 - i);
}

int	is_number(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
