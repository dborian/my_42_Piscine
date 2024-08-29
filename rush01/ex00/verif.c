/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:44:11 by dedme             #+#    #+#             */
/*   Updated: 2024/08/18 23:37:42 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_verif1(int *tab, int opt)
{
	int	i;
	int	t;
	int	temp;
	int	opti;
	int	j;

	i = 0;
	j = 0;
	while (i <= 15)
	{
		while (j <= 15)
		{
			if (tab[i] == tab[j])
				return (1);
			j += 4;
		}
		j = 0;
		i += 4;
	}
	if (opt == 1)
	{
		temp = tab[0];
		i = 0;
	}
	else if (opt > 1)
	{
		temp = tab[15 - (opt - 2)];
		i = 0 + (opt - 2);
	}
	t = 1;
	opti = 15;
	while (i <= 15)
	{
		if (tab[i] > temp && opt == 1)
		{
			temp = tab[i];
			t++;
		}
		else if (tab[opti - i] > temp && opt > 1)
		{
			temp = tab[opti - i];
			t++;
		}
		i += 4;
	}
	return (t);
}

int	ft_verif(int *tab, int opt)
{
	int	i;
	int	t;
	int	temp;
	int	opti;
	int 	j;

	j = 0;
	i = 0;
	while (i <= 3)
	{
		while (j <= 3)
		{
			if (tab[i] == tab[j])
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	if (opt == 1)
		temp = tab[0];
	else if (opt > 1)
		temp = tab[3];
	i = -1;
	t = 1;
	opti = 3;
	while (++i <= 3)
	{
		if (tab[i] > temp && opt == 1)
		{
			temp = tab[i];
			t++;
		}
		else if (tab[opti - i] > temp && opt == 2)
		{
			temp = tab[opti - i];
			t++;
		}
	}
	return (t);
}

int	ft_test(int *set, int *tab)
{
	if (tab[0] != ft_verif1(&set[0], 2))
		return (1);	
	if (tab[1] != ft_verif1(&set[0], 3))
		return (1);	
	if (tab[2] != ft_verif1(&set[0], 4))
		return (1);	
	if (tab[3] != ft_verif1(&set[0], 5))
		return (1);	
	if (tab[4] != ft_verif1(&set[0], 1))
		return (1);	
	if (tab[5] != ft_verif1(&set[1], 1))
		return (1);	
	if (tab[6] != ft_verif1(&set[2], 1))
		return (1);	
	if (tab[7] != ft_verif1(&set[3], 1))
		return (1);	
	if (tab[8] != ft_verif(&set[0], 1))
		return (1);	
	if (tab[9] != ft_verif(&set[4], 1))
		return (1);	
	if (tab[10] != ft_verif(&set[8], 1))
		return (1);	
	if (tab[11] != ft_verif(&set[12], 1))
		return (1);	
	if (tab[12] != ft_verif(&set[0], 2))
		return (1);	
	if (tab[13] != ft_verif(&set[4], 2))
		return (1);	
	if (tab[14] != ft_verif(&set[8], 2))
		return (1);	
	if (tab[15] != ft_verif(&set[12], 2))
		return (1);	
	return (0);
}
