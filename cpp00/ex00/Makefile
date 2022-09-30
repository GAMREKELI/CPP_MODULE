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

NAME = megaphone

LIST = megaphone.cpp

CC = c++

FLAGS = -Wall -Werror -Wextra

OBJ = $(LIST:.cpp=.o)

${NAME}:	${OBJ}
				${CC} ${FLAGS} $^ -o $@

%.o : %.c Makefile
	${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONNY : all clean fclean re