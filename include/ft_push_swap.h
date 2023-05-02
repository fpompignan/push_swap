/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fassier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:40:13 by fassier-          #+#    #+#             */
/*   Updated: 2022/01/19 14:18:57 by fassier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

void	ft_write(int sortie, char c);
void	ft_putstr(int sortie, char *str);
long	ft_atoi(const char *nptr);
int		count_byte(int nb);
int		is_number(char *str);
int		check_if_number(char **liste, int size);
void	fill_tab(long tab[], int size, char **argv);
int		check_size_number(long tab[], int size);
int		check_doublon(long tab[], int size);
int		check(char **argv, long tab[], int size);
void	ft_sort_tab(long tab[], int sort_tab[], int size);
void	index_tab(long tab[], int sort_tab[], int final_tab[], int size);
int		calculate_size_b(int tab[], int size, int round);
void	split_tab(int tab[], int size, int round);
int		*fill_liste_a(int tab[], int size, int *size_B, int round);
int		*fill_liste_b(int tab[], int size, int *size_B, int round);
void	fusion1(int *tab, int *liste_B, int size_B);
void	fusion2(int *tab, int size, int *liste_A, int size_B);
void	sort_big_stack(int argc, long tab[], int round);
void	sort_3_nbs(long tab[]);
void	sort_4_nbs(long tab[]);
void	simplification(long tab[], long small_tab[]);
void	sort_5_nbs(long tab[]);
void	sort_small_stack(int argc, long tab[]);
int		check_is_sorted(long tab[], int size);
int		main(int argc, char **argv);

#endif
