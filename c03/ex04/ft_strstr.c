/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:35:33 by dedme             #+#    #+#             */
/*   Updated: 2024/08/17 12:05:04 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (to_find[j] == str[i])
		{
			while (to_find[j] == str[i])
			{
				i++;
				if (to_find[++j] == '\0')
					return (&str[i -= j]);
			}
			i -= j;
			j = 0;
		}
		i++;
	}
	return (0);
}

/*
   int	main(void)
   {
   char	tkt[50] = "uhudbofhiydshfubotisduahfu";
   char	retkt[50] = "bot";
   char	*test;

   printf("%s\n", ft_strstr(tkt, retkt));
   test = strstr(tkt, retkt);
   printf("%s\n", test);
   return (0);
   }
 */
