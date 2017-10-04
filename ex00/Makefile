# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prazvan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/30 13:10:01 by prazvan           #+#    #+#              #
#    Updated: 2017/10/01 13:53:42 by prazvan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

all: $(NAME)

compile: 
	gcc -Wall -Werror -Wextra -c *.c
	
$(NAME): compile 
	gcc -o $(NAME) *.o
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)

