# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 12:30:31 by jroldan-          #+#    #+#              #
#    Updated: 2023/01/25 17:47:31 by jroldan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAG = -Wall -Wextra -Werror

SRC = ft_printf.c ft_character.c ft_digit.c

CC = gcc
OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	$(CC) $(CFLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	
all : $(NAME)

re : fclean all

clean :
	rm -f $(OBJ)

fclean : clean
	rm  -f $(NAME)

.PHONY : clean fclean all re
