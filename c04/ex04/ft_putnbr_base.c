/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:08:10 by dedme             #+#    #+#             */
/*   Updated: 2024/08/20 13:42:12 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_test(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[j])
		{
			if ((str[i] == str[j] && i != j) || str[j] == '+' || str[j] == '-')
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				tab[10];
	unsigned int	nb;

	nb = nbr;
	if (ft_strlen(base) < 2 || ft_test(base) == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = nbr * -1;
	}
	else if (nbr == 0)
		ft_putchar(base[nbr % ft_strlen(base)]);
	nbr = -1;
	if (nb != 0)
	{
		while (nb != 0)
		{
			tab[++nbr] = nb % ft_strlen(base);
			nb = nb / ft_strlen(base);
			while (nbr >= 0 && nb == 0)
				ft_putchar(base[tab[nbr--]]);
		}
	}
}

/*
   int	main(int argc, char **argv)
   {
   if (argc > 1)
   ft_putnbr_base(0, argv[1]);
   return (0);
   }
 */
