/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:16:56 by dedme             #+#    #+#             */
/*   Updated: 2024/08/12 10:17:24 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	temp = 0;
	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}
/*
int	main(void)
{
	int	tab[4] = {-7, 4, 0, 8};
	int	i;
	int	size;

	size = 4;
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i++]);
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i++]);
	}
	printf("\n");
	return (0);
}
*/
