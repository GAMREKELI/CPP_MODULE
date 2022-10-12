#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2022/10/01 21:18:44 by pdursley          #+#    #+#             *#
#*   Updated: 2022/10/01 21:18:46 by pdursley         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = Fixed

LIST = main.cpp Fixed.cpp

HDR = Fixed.hpp

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

OBJ = $(patsubst %.cpp,%.o,${LIST})

${NAME}:	${OBJ}
				${CC} ${FLAGS} ${HDR} $^ -o $@

%.o : %.cpp Makefile
	${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONNY : all clean fclean re