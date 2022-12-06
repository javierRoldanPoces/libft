# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 13:11:51 by jroldan-          #+#    #+#              #
#    Updated: 2022/12/06 19:52:07 by jroldan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAG = -Wall -Werror -Wextra
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c \
	ft_strdup.c

CC = gcc
OBJ = $(SRC:.c=.o)
CC = gcc


$(NAME) : $(OBJ)	
	$(CC) $(CFLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ) $(SRC)

all : $(NAME)
re: make fclean all
clean:
	rm  -f *.o $(NAME)

fclean:
	rm  -f *.a *.o $(NAME)

.PHONY : clean fclean all re
