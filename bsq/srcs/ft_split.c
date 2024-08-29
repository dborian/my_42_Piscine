/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:31:03 by anpicard          #+#    #+#             */
/*   Updated: 2024/08/28 11:53:53 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

int	ft_chain_calc(char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == sep)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strdup(char *str)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(ft_strlen(str) + 1 * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (str[i] && str[i] != '\n')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char sep)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(tab) * ft_chain_calc(str, sep) + 1);
	if (tab == NULL)
	{
		write(2, "error malloc\n", 13);
		return (NULL);
	}
	tab[j++] = ft_strdup(str);
	i++;
	while (str[i])
	{
		if (str[i - 1] == sep)
			tab[j++] = ft_strdup(&str[i]);
		i++;
	}
	free(str);
	return (tab);
}
