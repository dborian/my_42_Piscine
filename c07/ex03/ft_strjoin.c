/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:01:51 by dedme             #+#    #+#             */
/*   Updated: 2024/08/29 14:28:13 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <malloc.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcat(int i, char *dest, char *src)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	len = ft_strlen(sep) * (size - 1);
	while (--size >= 0)
		len += ft_strlen(strs[size]);
	str = malloc(sizeof(str) * len + 1);
	while (i <= len - 1)
	{
		i = ft_strcat(i, str, strs[k]);
		if (i <= len - 1 + (k++ *0))
			i = ft_strcat(i, str, sep);
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char *strs[5];
	strs[0] = "bonjour";
	strs[1] = "je";
	strs[2] = "suis";
	strs[3] = "moi";
	char *str;

	str = ft_strjoin(4, strs, " ");
	printf("%s", str);
	free(str);
	return (0);
}*/
