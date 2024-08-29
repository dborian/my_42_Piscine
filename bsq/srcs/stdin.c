/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:34:12 by dedme             #+#    #+#             */
/*   Updated: 2024/08/28 20:33:58 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_strrlen(char *str)
{
	int	len;
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	len = (ft_strlen(&str[i + 1]) + 1) * ft_atoi(str, '\n');
	return (len);
}

char	*ft_read_std(void)
{
	char	str[250000];
	char	*strs;
	char	c;
	int	i;
	int	size;

	i = 0;
	size = -1;
	while (size != 0)
	{
		size = read(0, &c, 1);
		str[i] = c;
		i++;
	}
	size = i;
	strs = malloc(sizeof(char) * size);
	i = 0;
	while (i < size)
	{
		strs[i] = str[i];
		i++;
	}
	return (strs);
}
