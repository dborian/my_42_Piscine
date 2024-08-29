/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:02:49 by dedme             #+#    #+#             */
/*   Updated: 2024/08/28 20:35:09 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32) && (str[i] != '\n'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_map(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = 1;
	while (str[i - 1] != '\n')
		i++;
	if (str[i] == '\0')
		return (1);
	if (ft_str_is_printable(str) != 1)
		return (1);
	if (str[len + 1] == str[len - 2] && str[len + 2] == '\n')
		return (1);
	if (ft_strlen(str) < 4)
		return (1);
	len = ft_strlen(&str[i]);
	while (str[i - 1])
	{
		while (str[i - 1] != '\n' && str[i] != '\0')
			i++;
		if (str[i] != '\0')
			if (ft_strlen(&str[i]) != len)
				return (1);
		i++;
	}
	if (str[i - 2] != '\n')
		return (1);
	return (0);
}
