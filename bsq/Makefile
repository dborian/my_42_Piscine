# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anpicard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/28 11:22:09 by anpicard          #+#    #+#              #
#    Updated: 2024/08/28 20:04:26 by anpicard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = srcs

MY_SOURCES =	$(SRC)/ft_split.c\
		$(SRC)/main.c\
		$(SRC)/print_map.c\
		$(SRC)/read_file.c\
		$(SRC)/solveur.c\
		$(SRC)/check_map.c\
		$(SRC)/free.c\
		$(SRC)/ft_atoi.c\
		$(SRC)/stdin.c
			
MY_OBJECTS = $(MY_SOURCES:.c=.o)

MY_CFLAG = -Wall -Wextra -Werror -I includes

all = $(SRC)

$(SRC) : $(MY_OBJECTS)
			cc -o $(NAME) $(MY_OBJECTS) $(MY_CFLAG)

.PHONY: clean fclean

clean:
		rm -f $(MY_OBJECTS)
fclean:		clean
			rm -f $(NAME)
