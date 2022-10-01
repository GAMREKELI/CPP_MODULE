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

NAME = Violence

LIST = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

CC = c++

HDR_A = HumanA.hpp

HDR_B = HumanB.hpp

HDR = Weapon.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

OBJ = $(LIST:.cpp=.o)

${NAME}:	${OBJ}
				${CC} ${FLAGS} ${HDR_A} ${HDR_B} ${HDR} $^ -o $@

%.o : %.c Makefile
	${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONNY : all clean fclean re