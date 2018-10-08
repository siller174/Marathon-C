# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 10:00:38 by sorwyle           #+#    #+#              #
#    Updated: 2018/10/03 10:00:45 by sorwyle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = src/*.c
OBJECT = *.o

FLAGS = -Wall -Wextra -Werror

all:
		gcc $(FLAGS) -c $(SRC)
		gcc $(FLAGS) -o ft_display_file $(OBJECT)
		make clean
clean:
		rm -f $(OBJECT)
fclean:
		make clean
		rm ft_display_file