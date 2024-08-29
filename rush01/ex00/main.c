/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:29:11 by dedme             #+#    #+#             */
/*   Updated: 2024/08/18 21:38:55 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush01(int *tab, int *set, int i);

int	main(int argv, char **argc)
{
	int	tab[16];
	int	i;
	int	j;
	int	set[16];

	i = 0;
	j = 0;
	if (argv == 2)
	{
		while (i < 16)
		{
			set[i] = 1;
			i++;
		}
		i = 0;
		while (i <= 31)
		{
			tab[j++] = argc[1][i] - 48;
			i += 2;
		}
		rush01(tab, set, 0);
	}
	return (0);
}
