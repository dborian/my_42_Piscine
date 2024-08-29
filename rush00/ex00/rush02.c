/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeleard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:16:40 by fdeleard          #+#    #+#             */
/*   Updated: 2024/08/11 15:12:00 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (((col == 1) && (row == 1)) || \
				(((col == x) && (row == 1)) || ((col == 1) && (row == 1))))
				ft_putchar('A');
			else if (((col == x) && (row == y)) || ((col == 1) && (row == y)))
				ft_putchar('C');
			else if (((row == 1) || (row == y)) || ((col == 1) || (col == x)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
