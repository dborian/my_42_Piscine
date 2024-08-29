/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:32:55 by dedme             #+#    #+#             */
/*   Updated: 2024/08/20 19:40:19 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (nb);
}
/*
int	main(void)
{
	printf("expected = 120\nresult = %d\n\n", ft_recursive_factorial(5));
	printf("expected = 1\nresult = %d\n\n", ft_recursive_factorial(0));
	printf("expected = 1\nresult = %d\n\n", ft_recursive_factorial(1));
	printf("expected = 0\nresult = %d\n\n", ft_recursive_factorial(-1));
	printf("expected = 3628800\nresult = %d\n", ft_recursive_factorial(10));
	return (0);
}
*/
