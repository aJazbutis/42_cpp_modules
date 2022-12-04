# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 21:08:31 by ajazbuti          #+#    #+#              #
#    Updated: 2022/08/29 18:18:58 by ajazbuti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRC = main.cpp Span.cpp

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
