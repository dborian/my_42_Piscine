/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_tabchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 21:24:54 by dedme             #+#    #+#             */
/*   Updated: 2024/08/25 23:06:55 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_nobatery(char *str)
{
	int		i;
	int		j;
	int		len;
	char	**comp;

	len = ft_strlen(str);
	comp = malloc(sizeof(comp) * len);
	i = 0;
	j = 0;
	while (i < len)
	{
		j = i;
		comp[i] = malloc(sizeof(comp) * ft_strlen(&str[j]) + 1);
		comp[i][j - i] = str[j];
		j++;
		while (str[j] != '\0')
			comp[i][j++ - i] = '0';
		comp[i][j - i] = '\0';
		i++;
	}
	return (comp);
}
/*
int	main(int argc, char **argv)
{
	char	**tab;
	int	i;

	i = argc -  argc;
	tab = ft_nobatery(argv[1]);
	while (tab[i][1] != 0)
	{
		printf("%s\n", tab[i++]);
	}
	printf("%s\n", tab[i]);
	return (0);

}
*/
