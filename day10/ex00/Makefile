# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 09:53:15 by sorwyle           #+#    #+#              #
#    Updated: 2018/10/01 10:19:56 by sorwyle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
OBJECT  = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

FLAGS = -Wall -Wextra -Werror
OPTIONS = -c -I ./includes/

all: $(NAME)
$(NAME):
	gcc $(FLAGS) $(SRC) $(OPTIONS) 
	ar -rc $(NAME) $(OBJECT)
	make clean
clean:
	/bin/rm -f $(OBJECT)

fclean:
	/bin/rm -f $(NAME)
re: fclean all