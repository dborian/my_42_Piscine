/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:10:25 by dedme             #+#    #+#             */
/*   Updated: 2024/08/15 18:42:12 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
/*
   int	main(void)
   {
   char bon[20] = "bon";
   char jour[20] = "jour";
   char sa[20] = "sa";
   char lut[20] = "lut";
   char K[20] = "K.";
   char O[20] = "O";
   char top[20] = "top ";
   char bot[20] = "bot";
   char bon1[20] = "bon";
   char jour1[20] = "jour";
   char sa1[20] = "sa";
   char lut1[20] = "lut";
   char K1[20] = "K.";
   char O1[20] = "O";
   char top1[20] = "top ";
   char bot1[20] = "bot";
   printf("%s\n", ft_strcat(bon, jour));
   printf("%s\n", ft_strcat(sa, lut));
   printf("%s\n", ft_strcat(K, O));
   printf("%s\n", ft_strcat(top, bot));
   printf("%s\n", strcat(bon1, jour1));
   printf("%s\n", strcat(sa1, lut1));
   printf("%s\n", strcat(K1, O1));
   printf("%s\n", strcat(top1, bot1));
   return (0);
   }
 */
