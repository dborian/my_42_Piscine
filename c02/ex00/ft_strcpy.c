/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:16:11 by dedme             #+#    #+#             */
/*   Updated: 2024/08/15 14:35:52 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
//#include <stdio.h>
#include <bsd/string.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
int	main(void)
{
	char dest[10];
	char dest1[10];
	char src[10] = "Bonjour";

	printf("return value = %s\n", ft_strcpy(dest, src));
	printf("dest = %s\n\n", dest);
	printf("return value = %s\n", strcpy(dest1, src));
	printf("dest1 = %s\n", dest1);
	return (0);
}
*/
