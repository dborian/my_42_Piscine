/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedme <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:26:01 by dedme             #+#    #+#             */
/*   Updated: 2024/08/15 18:40:20 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main()
{
	printf("ft_diff = %d\n", ft_strcmp("dodo","dodo"));
	printf("ft_diff = %d\n", ft_strcmp("feur","feu"));
	printf("ft_diff = %d\n", ft_strcmp("o","k"));
	printf("ft_diff = %d\n", ft_strcmp("a","az"));
	printf("diff = %d\n", strcmp("dodo","dodo"));
	printf("diff = %d\n", strcmp("feur","feu"));
	printf("diff = %d\n", strcmp("o","k"));
	printf("diff = %d\n", strcmp("a","az"));
	return (0);
}
*/
