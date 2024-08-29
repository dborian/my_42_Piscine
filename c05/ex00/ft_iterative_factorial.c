/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:32:55 by dedme             #+#    #+#             */
/*   Updated: 2024/08/20 16:48:59 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	nbr;

	nbr = nb--;
	if (nbr < 0)
		return (0);
	else if (nbr < 2)
		return (1);
	while (nb > 0)
		nbr *= nb--;
	return (nbr);
}
/*
int	main(void)
{
	printf("expected = 120\nresult = %d\n\n", ft_iterative_factorial(5));
	printf("expected = 1\nresult = %d\n\n", ft_iterative_factorial(0));
	printf("expected = 1\nresult = %d\n\n", ft_iterative_factorial(1));
	printf("expected = 0\nresult = %d\n\n", ft_iterative_factorial(-1));
	printf("expected = 3628800\nresult = %d\n\n", ft_iterative_factorial(10));
	return (0);
}
*/
