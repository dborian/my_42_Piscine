/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 22:09:25 by dedme             #+#    #+#             */
/*   Updated: 2024/08/10 11:57:45 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int div;
	int mod;

	div = 0;
	mod = 0;
	ft_div_mod(6, 3, &div, &mod);
	printf("div = %d mod = %d", div, mod);
	return(0);
}
*/
