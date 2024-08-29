/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:43:29 by dedme             #+#    #+#             */
/*   Updated: 2024/08/22 07:21:14 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (++i < power)
		nbr *= nb;
	return (nbr);
}
/*
int	main(void)
{
	printf("expected = 3125\nresult = %d\n\n", ft_iterative_power(5,5));
	printf("expected = 0\nresult = %d\n\n", ft_iterative_power(5,-5));
	printf("expected = 1\nresult = %d\n\n", ft_iterative_power(0,0));
	printf("expected = -3125\nresult = %d\n\n", ft_iterative_power(-5,5));
	printf("expected = 65536\nresult = %d\n\n", ft_iterative_power(4,8));
	printf("expected = 0\nresult = %d\n\n", ft_iterative_power(0,5));
	printf("expected = 1\nresult = %d\n\n", ft_iterative_power(5,0));
	return (0);
}
*/
