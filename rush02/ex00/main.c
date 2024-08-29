/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 23:08:15 by dedme             #+#    #+#             */
/*   Updated: 2024/08/25 23:32:51 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verif(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_verif(argv[1]) == 1)
		{
			write(2, "incorrect input\n", 16);
			return (0);
		}
		ft_strstr(argv[1]);
	}
	else if (argc == 3)
	{
		if (ft_verif(argv[2] == 1))
		{
			write(2, "incorrect input\n", 16);
			return (0);
		}
		ft_strstr(argv[2]);
	}
	return (0);
}
