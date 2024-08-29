/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:26:01 by dedme             #+#    #+#             */
/*   Updated: 2024/08/17 18:55:09 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}
/*
   int	main()
   {
   printf("diff = %d\n", ft_strncmp("moinS","moins", 6));
   printf("diff = %d\n", ft_strncmp("bonjour","Bonjour", 6));
   printf("diff = %d\n\n", ft_strncmp("bonjour","bonjoUr", 6));
   printf("diff = %d\n", strncmp("moinS","moins", 6));
   printf("diff = %d\n", strncmp("bonjour","Bonjour", 6));
   printf("diff = %d\n", strncmp("bonjour","bonjoUr", 6));
   return (0);
   }
 */
