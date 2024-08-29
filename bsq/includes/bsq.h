/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 02:37:26 by anpicard          #+#    #+#             */
/*   Updated: 2024/08/28 20:36:09 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

void	ft_puttab(char **tab, int *xyl);
char	*ft_file(char *path_file);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
char	**ft_split(char *str, char sep);
int	*ft_solveur(char **tab);
int	ft_check_map(char *str);
void	ft_free(char **strs, int *tab);
int	ft_atoi(char *str, char end);
char	*ft_read_std(void);

#endif


