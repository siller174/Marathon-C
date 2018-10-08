# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 17:10:31 by sorwyle           #+#    #+#              #
#    Updated: 2018/10/01 17:10:34 by sorwyle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = src/*.c
OBJECT = *.o

FLAGS = -Wall -Wextra -Werror

all:
	gcc $(FLAGS) -c $(SRC)
	gcc $(FLAGS) -o do-op $(OBJECT)
	make clean
clean:
		rm -f $(OBJECT)