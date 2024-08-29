/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 02:36:40 by anpicard          #+#    #+#             */
/*   Updated: 2024/08/28 19:14:37 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puttab(char **tab, int *xyl)
{
	int		i;
	int		j;
	int		len;
	char	o;

	len = xyl[2];
	i = 0;
	while (tab[0][i] != '\0')
	{
		i++;
	}
	o = tab[0][i - 1];
	i = 0;
	j = 1;
	while (j <= ft_atoi(tab[0], '\0'))
	{
		while (tab[j][i])
		{
			if (i >= xyl[1] && i <= xyl[1] + len
				&& j >= xyl[0] && j <= xyl[0] + len)
				ft_putchar(o);
			else
				ft_putchar(tab[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 0;
	}
}
