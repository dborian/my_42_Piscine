/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:17:03 by dedme             #+#    #+#             */
/*   Updated: 2024/08/10 11:54:56 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_verif(int *tab, int size)
{
	int	i;

	i = 1;
	while (tab[i] >= tab[i - 1] && i <= size)
	{
		i++;
	}
	if (i <= size)
		return (1);
	else
		return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	best;

	i = 0;
	best = 0;
	size --;
	while (ft_verif(tab, size) != 0)
	{
		i = 0;
		while (i <= size)
		{
			if (tab[best] < tab[i])
				best = i;
			i++;
		}
		i = tab[size];
		tab[size] = tab[best];
		tab[best] = i;
		size--;
		best = 0;
	}
}

/*
int    main(void)
{
	int    tab[10] = {2, 1, 9, 51, 18, 14, 7, 20, 74, 0};
	int    size;
	int i;

	size = 10;
	i = 0;
	while (i <= 9)
	{
		printf("%d ", tab[i++]);
	}
	i = 0;
	ft_sort_int_tab(tab, size);
	printf("\n");
	while (i <= 9)
	{
		printf("%d ", tab[i++]);
	}
	return (0);
}
*/
