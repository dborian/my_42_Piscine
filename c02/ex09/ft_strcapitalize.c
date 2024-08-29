/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:46:20 by dedme             #+#    #+#             */
/*   Updated: 2024/08/13 20:22:24 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_poolverif(char c)
{
	char	*pool;
	int		i;

	pool = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	i = 0;
	while (pool[i] != '\0')
	{
		if (pool[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_poolverif(str[i]) == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			while (ft_poolverif(str[i]) == 1 && str[i] != '\0')
			{
				i++;
				if (str[i] >= 'A' && str[i] <= 'Z')
				{
					str[i] += 32;
				}
			}
		}
		else
			i++;
	}
	return (str);
}

/*
   int	main(void)
   {
   char	str[] = "saLut Je m'4pelle MICKey hO+hO";

   printf("str = %s", ft_strcapitalize(str));
   return (0);
   }
 */
