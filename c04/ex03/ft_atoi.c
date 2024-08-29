/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:35:35 by dedme             #+#    #+#             */
/*   Updated: 2024/08/26 13:39:37 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_verif(char c)
{
	int		i;
	char	*pool;

	pool = " \t\n\v\f\r0123456789+-";
	i = 0;
	while (pool[i])
		if (c == pool[i++])
			return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	v;
	int	vr;

	v = 0;
	nbr = 0;
	i = -1;
	vr = 0;
	while (str[++i] && ft_verif(str[i]) == 1 && vr == 0)
	{
		while (str[i] == '+' || str[i] == '-')
			if (str[i++] == '-' + (vr++ *0))
				v += 1;
		while (str[i] >= '0' && str[i] <= '9')
			nbr = nbr * 10 + (str[i++] - 48 + (vr++ *0));
		if (nbr != 0)
			return ((v % 2 != 0) * -nbr + (v % 2 == 0) * nbr);
	}
	return (0);
}
/*
   int	main(void)
   {
   printf("expected = %d\nresult = %d\n\n", atoi("122"), ft_atoi("122"));
   printf("expected = %d\nresult = %d\n\n", atoi("1 22"), ft_atoi("1 22"));
   printf("expected = %d\nresult = %d\n\n", atoi("12 2"), ft_atoi("12 2"));
   printf("expected = %d\nresult = %d\n\n", atoi(" 122"), ft_atoi(" 122"));
   printf("expected = %d\nresult = %d\n\n", atoi("q122"), ft_atoi("q122"));
   printf("expected = %d\nresult = %d\n\n", atoi("-122"), ft_atoi("-122"));
   printf("expected=%d\nresult=%d\n\n",atoi("122a122"),ft_atoi("122a122"));
   printf("expected=%d\nresult=%d\n\n", atoi(" 122 122"), ft_atoi(" 122 122"));
   printf("expected=%d\nresult=%d\n\n",atoi(" 1f22feur"),ft_atoi(" 1f22feur"));
   printf("expected = 0\nresult = %d\n\n", ft_atoi(" -- --122"));
   printf("expected = -39\nresult = %d\n\n", ft_atoi(" ---39"));
   printf("expected = 125\nresult = %d\n\n", ft_atoi(" \n----125f"));
   printf("expected = 0\nresult = %d\n\n", ft_atoi(" ++0"));
   printf("expected = 42\nresult = %d\n\n", ft_atoi(" ++42vggr"));
   printf("expected = 129\nresult = %d\n\n", ft_atoi("129"));
   printf("expected = 0\nresult = %d\n\n", ft_atoi("o129"));
   printf("expected = 0\nresult = %d\n\n", ft_atoi("++ +129"));
   printf("expected = 0\nresult = %d\n\n", ft_atoi("-- -129"));
   printf("expected = 0\nresult = %d\n\n", ft_atoi("----0"));
   printf("expected = 0\nresult = %d\n\n", ft_atoi("- + + - + - +129"));
   printf("expected = 2\nresult = %d\n\n", ft_atoi(" 2-129"));
   printf("expected = -2147483648\nresult = %d\n\n", ft_atoi("-2147483648"));
   printf("expected = 1245\nresult = %d\n\n", ft_atoi(" 1245"));
   printf("result = %d\n\n", ft_atoi(" 	a+-2-129"));
   }
 */
