/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:40:01 by dedme             #+#    #+#             */
/*   Updated: 2024/08/29 14:16:37 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include <malloc.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*tab;

	if (max <= min)
		return (NULL);
	len = max - min;
	i = 0;
	tab = malloc(sizeof(tab) * len);
	while (i < len)
		tab[i++] = min++;
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	int	i;
	int	*tab;

	i = 0;
	if (argc != 3)
		return (0);
	tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	while(i < atoi(argv[2]) - atoi(argv[1]))
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
*/
