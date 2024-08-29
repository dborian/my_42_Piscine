/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:16:11 by dedme             #+#    #+#             */
/*   Updated: 2024/08/12 15:01:15 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	dest[10];
	char	src[4];

	src[0] = 'B';
	src[1] = 'o';
	src[2] = 'n';
	src[3] = 'j';
	ft_strncpy(dest, src, 4);
	printf("dest = %s\n", dest);
	return (0);
}
*/
