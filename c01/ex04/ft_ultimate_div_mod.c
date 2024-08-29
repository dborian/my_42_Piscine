/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 22:27:40 by dedme             #+#    #+#             */
/*   Updated: 2024/08/08 22:43:57 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = *a / *b;
	*b = temp_a % *b;
}

/*
int	main(void)
{
	int a;
	int b;

	a = 6;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d b = %d\n",a ,b);
	return(0);
}
*/
