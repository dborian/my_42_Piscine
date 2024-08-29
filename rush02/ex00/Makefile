NAME = rush02

CC = gcc 

MY_SOURCES = ft_split_tabchar.c \
			ft_strstr.c\
			read_file.c \
			
MY_OBJECTS = $(MY_SOURCES:.c=.o)

MY_CFLAG = -Wall -Wextra -Werror

all = $(NAME)

$(NAME) : $(MY_OBJECTS)
			cc - o $(NAME) $(MY_OBJECTS) $(MY_CFLAG)

.PHONY: clean fclean

clean:
		rm -f $(MY_OBJECTS)

fclean :
		rm -f $(NAME)


