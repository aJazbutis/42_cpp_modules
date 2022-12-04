# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 21:08:31 by ajazbuti          #+#    #+#              #
#    Updated: 2022/08/28 18:37:44 by ajazbuti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRC = main.cpp 

OBJ = ${SRC:.cpp=.o}

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

all: ${NAME}

%.o: %.cpp
	${CC} ${CFLAGS} $^ -c

${NAME}: ${OBJ}
	${CC} ${FLAGS} $^ -o $@

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -fr ${NAME}

re: fclean all

.PHONY: all clean fclean re
