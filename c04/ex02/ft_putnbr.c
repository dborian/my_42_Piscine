/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:23:32 by dedme             #+#    #+#             */
/*   Updated: 2024/08/20 13:38:57 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int				tab[10];
	unsigned int	nbr;

	nbr = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else if (nb == 0)
		ft_putchar(48);
	nb = -1;
	while (nbr != 0)
	{
		tab[++nb] = nbr % 10;
		nbr = nbr / 10;
	}
	while (nb >= 0)
		ft_putchar(tab[nb--] + 48);
}
/*
int	main(void)
{
	ft_putnbr(0);
	return (0);
}
*/
