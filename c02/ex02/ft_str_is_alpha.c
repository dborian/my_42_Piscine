/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:31:47 by dedme             #+#    #+#             */
/*   Updated: 2024/08/11 19:49:38 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] > 96 && str[i] < 123) || (str[i] > 64 && str[i] < 91)))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("str = %d\n", ft_str_is_alpha("hdhfTYFT8YFTYshfuh"));
	return (0);
}
*/
