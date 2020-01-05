# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saad <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/18 03:06:54 by saad              #+#    #+#              #
#    Updated: 2019/02/20 00:08:16 by saad             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./*.c
HEADERS = ./*.h
OBJECT = *.o
FLAGS = -Wall -Werror -Wextra 
DELETE = rm -f

all : $(NAME)

$(NAME) : 
	gcc -c $(FLAGS) $(SRC) -I $(HEADERS)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean :
	$(DELETE) $(OBJECT)

fclean : clean
	$(DELETE) $(NAME)

re : fclean all
