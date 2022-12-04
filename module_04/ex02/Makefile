# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 17:17:14 by ajazbuti          #+#    #+#              #
#    Updated: 2022/08/19 16:26:12 by ajazbuti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJ = ${SRC:.cpp=.o}

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

%.o: %.cpp
	${CC} ${CFLAGS} $^ -c

${NAME}: ${OBJ}
	${CC} ${CFLAGS} $^ -o ${NAME}

clean:
	rm -rf *.o

fclean: clean
	rm -fr ${NAME}

re: fclean all
