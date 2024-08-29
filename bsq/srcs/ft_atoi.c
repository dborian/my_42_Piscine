/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:15:57 by anpicard          #+#    #+#             */
/*   Updated: 2024/08/28 19:09:24 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	ft_atoi_len(char *str, char end)
{
	int	i;

	i = 0;
	while (str[i] != end)
		i++;
	return (i);
}

int	ft_atoi(char *str, char end)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (str[i] == '-')
		return (0);
	while ((str[i] >= '0' && str[i] <= '9') && (i < ft_atoi_len(str, end) - 3))
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);
}
