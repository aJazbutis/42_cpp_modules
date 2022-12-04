# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/22 17:31:49 by ajazbuti          #+#    #+#              #
#    Updated: 2022/07/26 19:29:02 by ajazbuti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJ = ${SRC:.cpp=.o}

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

%.o: %.cpp
	${CC} ${CFLAGS} -c $^

${NAME}: ${OBJ}
	${CC} ${CFLAGS} $^ -o ${NAME}

clean:
	rm -fr *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all
