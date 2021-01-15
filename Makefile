# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/14 17:42:00 by abestaev          #+#    #+#              #
#    Updated: 2021/01/15 14:53:48 by abestaev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_isalnum.c ft_isdigit.c ft_strlcat.c ft_strncmp.c ft_toupper.c \
      ft_isalpha.c ft_isprint.c ft_strlcpy.c ft_strrchr.c ft_isascii.c \
      ft_strchr.c ft_strlen.c ft_tolower.c

OBJ = $(SRC:.c=.o) 

all : $(NAME)

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
       	
clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
