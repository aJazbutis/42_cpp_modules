# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 17:17:14 by ajazbuti          #+#    #+#              #
#    Updated: 2022/08/24 20:19:59 by ajazbuti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRC = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp\
	  RobotomyRequestForm.cpp ShrubberryCreationForm.cpp

OBJ = ${SRC:.cpp=.o}

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

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
