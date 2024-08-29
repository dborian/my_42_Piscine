/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solveur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 03:30:06 by dedme             #+#    #+#             */
/*   Updated: 2024/08/28 20:36:40 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_verif(char **tab, int *xy, int len, char o)
{
	int	x;
	int	y;
	int	x1;
	int	y1;

	y1 = xy[0];
	x1 = xy[1];
	y = xy[0] + len;
	x = xy[1] + len;
	if (y > ft_atoi(tab[0], '\0'))
		return (1);
	while (y1 <= y && y1 <= ft_atoi(tab[0], '\0'))
	{
		if (tab[y1][x1] == o || tab[y1][x1] == '\0')
			return (1);
		if (x1 == x)
			x1 = x - len + (y1++ *0);
		else
			x1++;
	}
	return (0);
}

int	*ft_solveur(char **tab)
{
	int		xy[2];
	int		*xyl1;
	int		i;
	char	o;

	i = 0;
	while(tab[0][i] != '\0')
		i++;
	o = tab[0][i-2];
	xyl1 = malloc(sizeof(xyl1) * 4);
	xy[0] = 1;
	xy[1] = 0;
	xyl1[0] = 1;
	xyl1[1] = 0;
	xyl1[2] = 0;
	while (xy[0] <= ft_atoi(tab[0], '\0'))
	{
		while (ft_verif(tab, xy, xyl1[2] + 1, o) == 0)
		{
			xyl1[0] = xy[0];
			xyl1[1] = xy[1] + (xyl1[2]++ * 0);
		}
		if (tab[xy[0]][xy[1]] == '\0')
		{
			xy[1] = 0 + (xy[0]++ *0);
		}
		else
		{
			xy[1]++;
		}
	}
	return (xyl1);
}
