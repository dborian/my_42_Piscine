/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:31:47 by dedme             #+#    #+#             */
/*   Updated: 2024/08/12 15:00:03 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("str = %d\n", ft_str_is_printable("w.'; dsfgsdffsfsfses"));
	return (0);
}
*/
