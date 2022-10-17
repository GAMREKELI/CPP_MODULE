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

NAME = Animal

LIST = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

HDR1 = Animal.hpp

HDR2 = Cat.hpp

HDR3 = Dog.hpp

HDR4 = WrongAnimal.hpp

HDR5 = WrongCat.hpp

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

OBJ = $(patsubst %.cpp,%.o,${LIST})

${NAME}:	${OBJ}
				${CC} ${FLAGS} ${HDR1} ${HDR2} ${HDR3} ${HDR4} ${HDR5} $^ -o $@

%.o : %.cpp Makefile
	${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONNY : all clean fclean re