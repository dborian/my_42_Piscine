/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:13:56 by dedme             #+#    #+#             */
/*   Updated: 2024/08/29 13:34:09 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <malloc.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * ft_strlen(src) + 1);
	i = -1;
	while (src[++i] != '\0')
		str[i] = src[i];
	str[i] = '\0';
	return (str);
}
/*
   int	main(void)
   {
   char *str;

   str = ft_strdup("salut");
   printf("str = %s\n", str);
   free(str);
   return (0);
   }
 */
