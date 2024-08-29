/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:16:11 by dedme             #+#    #+#             */
/*   Updated: 2024/08/15 14:39:34 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
//#include <stdio.h>
#include <bsd/string.h>
*/
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size < 1)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	dest[25];
	char	dest1[25];
	char	dest2[25];
	char	dest3[25];
	char	src[25] = "bonj";
	char	src1[25] = "bonj";
	char	src2[25] = "bonj";
	char	src3[25] = "bonj";

	printf("? = %d\n", ft_strlcpy(dest, src, 10));
	printf("? = %d\n", ft_strlcpy(dest1, src1, 8));
	printf("? = %zu\n", strlcpy(dest2, src2, 10));
	printf("? = %zu\n", strlcpy(dest3, src3, 8));
	printf("dest = %s\n", dest);
	printf("dest1 = %s\n", dest1);
	printf("dest2 = %s\n", dest2);
	printf("dest3 = %s\n", dest3);
	return (ft_strlen(src) + 1);
}
*/
