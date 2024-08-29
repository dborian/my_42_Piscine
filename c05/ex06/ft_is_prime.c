/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 06:11:23 by dedme             #+#    #+#             */
/*   Updated: 2024/08/22 07:22:49 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb < 2)
		return (0);
	while (div < nb)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d\n", ft_is_prime(atoi(argv[1])));
	return (0);
}
*/
