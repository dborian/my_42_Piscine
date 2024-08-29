/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:35:31 by dedme             #+#    #+#             */
/*   Updated: 2024/08/28 20:32:35 by dedme            ###   ########.fr       */
/*   Updated: 2024/08/28 19:22:45 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		*tabl;
	char	**tab;

	i = 0;
	str = NULL;
	if (argc == 1)
		str = ft_read_std();
	else
		str = ft_file(argv[1]);
	if (ft_check_map(str) == 1)
	{
		write(2, "map error\n", 10);
		return (0);
	}
	tab = ft_split(str, '\n');
	tabl = ft_solveur(tab);
	ft_puttab(tab, tabl);
	ft_free(tab, tabl);
	return (0);
}
