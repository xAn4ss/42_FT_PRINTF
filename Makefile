# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoukhart <aoukhart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 03:14:39 by aoukhart          #+#    #+#              #
#    Updated: 2021/12/01 04:26:34 by aoukhart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_check_type.c ft_put_hex.c ft_put_int.c \
ft_putstr.c ft_putchar.c ft_printf.c \

OBJECT = $(SRC:.c=.o)

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJECT)
	@gcc -Wall -Werror -Wextra -c $(SRC)
	@ar rc $(NAME) $(OBJECT)

clean : 
	@rm -rf $(OBJECT)

fclean : clean
	@rm -rf $(NAME)

re : fclean all