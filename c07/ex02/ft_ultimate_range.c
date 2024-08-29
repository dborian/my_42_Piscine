/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:40:01 by dedme             #+#    #+#             */
/*   Updated: 2024/08/29 14:25:19 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
#include <malloc.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*tab;

	if (max <= min)
	{
		range = NULL;
		return (0);
	}
	len = max - min;
	i = 0;
	tab = malloc(sizeof(int) * len);
	while (i < len)
		tab[i++] = min++;
	*range = tab;
	return (len);
}
/*
int	main(int argc, char **argv)
{
	int	i;
	int	*tab;
	int	len;

	tab = NULL;
	i = 0;
	if (argc != 3)
		return (0);
	len = ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2]));
	printf("len = %d\n", len);
	while (i <= len)
	{
		printf("%d\n",tab[i++]);
	}
	free(tab);
	return (0);
}
*/
