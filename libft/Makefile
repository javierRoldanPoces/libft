# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 13:11:51 by jroldan-          #+#    #+#              #
#    Updated: 2022/12/03 19:05:36 by jroldan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAG = -Wall -Werror -Wextra
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c
OBJ = $(SRC:.c=.o)
CC = gcc

all : $(NAME)
$(NAME) : $(OBJ)	
	$(CC) $(CFLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ) $(SRC)

libft.o : libft.h 

re: make fclean all
clean:
	rm  -f *.o $(NAME)

fclean:
	rm  -f *.a *.o $(NAME)

.PHONY : clean fclean all re
