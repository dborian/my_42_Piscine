/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:33:45 by dedme             #+#    #+#             */
/*   Updated: 2024/08/21 21:31:10 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int	ft_verif(int *tab, int size, char **argv)
{
	int	i;

	i = 1;
	while (ft_strcmp(argv[tab[i]], argv[tab[i - 1]]) >= 0 && i <= size)
	{
		i++;
	}
	if (i <= size)
		return (1);
	else
		return (0);
}

void	ft_sort_int_tab(int *tab, int size, char **argv)
{
	int	i;
	int	best;

	i = 0;
	best = 0;
	size --;
	while (ft_verif(tab, size, argv) != 0)
	{
		i = 0;
		while (i <= size)
		{
			if (ft_strcmp(argv[tab[best]], argv[tab[i]]) < 0)
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

int	main(int argc, char **argv)
{
	int	tab[50];
	int	i;

	i = 1;
	while (i < argc)
	{
		tab[i -1] = i;
		i++;
	}
	ft_sort_int_tab(tab, argc -1, argv);
	i = 0;
	while (i < argc - 1)
	{
		ft_putstr(argv[tab[i]]);
		i++;
	}
	return (0);
}
