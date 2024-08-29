/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 20:12:29 by dedme             #+#    #+#             */
/*   Updated: 2024/08/09 11:22:20 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	c;
	int	d;

	c = 0;
	d = 1;
	while (c <= 98)
	{
		d = c + 1;
		while (d <= 99)
		{
			ft_putchar((c / 10) + 48);
			ft_putchar((c % 10) + 48);
			ft_putchar(' ');
			ft_putchar((d / 10) + 48);
			ft_putchar((d % 10) + 48);
			if (c < 98 || d < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d++;
		}
		c++;
	}
}
