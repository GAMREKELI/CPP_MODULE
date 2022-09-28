#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2022/09/27 23:49:44 by pdursley          #+#    #+#             *#
#*   Updated: 2022/09/27 23:51:46 by pdursley         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = PhoneBook

LIST = Contact.cpp main.cpp PhoneBook.cpp

HDR1 = Contact.hpp

HDR2 = PhoneBook.hpp

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98

OBJ = $(LIST:.cpp=.o)

${NAME}:	${OBJ}
				${CC} ${FLAGS} $^ -o $@

%.o : %.c ${HDR1} ${HDR2} Makefile
	${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONNY : all clean fclean re