/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:51:14 by dedme             #+#    #+#             */
/*   Updated: 2024/08/18 23:36:45 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_test(int *set, int *tab);

void	ft_print(int *tab)
{
	int	i;
	i = 0;
	while (i < 16)
	{
		write(1, &tab[i]+48, 1);
		i++;
	}
}

void	rush01(int *tab, int *set, int i)
{
	int v;

	v = 0;
	while(v == 0)
	{
		if (ft_test(set, tab) == 0)
		{
			ft_print(set);
			v = 1;
		}
		else
		{
			if (set[i] == 5)
			{
				set[i] = 1;
				i++;
				set[i]++;
			}
			else
			{
				i = 0;
				set[i]++;
			}
		}
	}
}
