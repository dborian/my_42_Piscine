/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:10:25 by dedme             #+#    #+#             */
/*   Updated: 2024/08/15 18:42:26 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && j < nb)
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
	char sa1[20] = "sa";
	char lut1[20] = "lut";
	char K[20] = "K.";
	char O[20] = "O";
	char top[20] = "top ";
	char bot[20] = "bot";
	printf("%s\n", ft_strncat(bon, jour, 4));
	printf("%s\n", ft_strncat(sa, lut, 2));
	printf("%s\n", strncat(sa1, lut1, 2));
	printf("%s\n", ft_strncat(K, O, 0));
	printf("%s\n", ft_strncat(top, bot, 2));
	return (0);
}
*/
