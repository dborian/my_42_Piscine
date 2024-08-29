/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:35:33 by dedme             #+#    #+#             */
/*   Updated: 2024/08/25 22:58:26 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char **str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	j = 0;
	k = -1;
	while (++k < 7)
	{
		while (str[k][++i] != '\0')
		{
			if (to_find[j] == str[k][i])
			{
				while (to_find[j++] == str[k][i++])
					if (to_find[j] == '\0')
						return (&str[k][i -= j]);
				i -= j;
				j = 0;
			}
		}
		i = -1;
		j = 0;
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	char	*retkt[20];
	char	*str;
	int		i;

	retkt[0] = "1:un";
	retkt[1] = "2:deux";
	retkt[2] = "10:dix";
	retkt[3] = "20:vingt";
	retkt[4] = "15:quinze";
	retkt[5] = "30:trente";
	retkt[6] = "50:cinquante";
	i = argc - argc;
	str = ft_strstr(retkt, argv[1]);
	while (str[i] != ':')
		i++;
	i++;
	printf("%s\n", &str[i]);
	return (0);
}
*/
