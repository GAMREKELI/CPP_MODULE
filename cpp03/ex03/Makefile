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

NAME = DiamondTrap

LIST = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

HDR1 = ClapTrap.hpp

HDR2 = ScavTrap.hpp

HDR3 = FragTrap.hpp

HDR4 = DiamondTrap.hpp

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

OBJ = $(patsubst %.cpp,%.o,${LIST})

${NAME}:	${OBJ}
				${CC} ${FLAGS} ${HDR1} ${HDR2} ${HDR3} ${HDR4} $^ -o $@

%.o : %.cpp Makefile
	${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONNY : all clean fclean re