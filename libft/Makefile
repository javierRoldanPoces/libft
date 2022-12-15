# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 13:11:51 by jroldan-          #+#    #+#              #
#    Updated: 2022/12/15 17:41:45 by jroldan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAG = -Wall -Werror -Wextra
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

CC = gcc
OBJ = $(SRC:.c=.o)
OBJBONUS = $(SRCBONUS:.c=.o)

$(NAME) : $(OBJ)	
	$(CC) $(CFLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ) $(SRC)

all : $(NAME) $(OBJBONUS)

re: make fclean all

clean:
	rm  -f *.o $(NAME)

fclean:
	rm  -f *.a *.o $(NAME)
bonus:
	$(CC) $(CFLAG) -c $(SRCBONUS)
	ar rc $(NAME) $(OBJBONUS) $(SRC)


.PHONY : clean fclean all re bonus
