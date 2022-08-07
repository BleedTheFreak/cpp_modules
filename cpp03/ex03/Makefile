# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 16:23:56 by ytaya             #+#    #+#              #
#    Updated: 2022/07/24 23:10:06 by ytaya            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name=DiamodTrap
SRC=ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
obj=$(SRC:%.cpp=%.o)

all: $(Name) ${SRC}

$(Name): $(obj)
	c++ ${obj} main.cpp -Wall -Wextra -Werror -std=c++98 -Wshadow -o ${Name} 

${obj} : ${SRC}
	c++ ${SRC} -c -Wall -Wextra -Werror -std=c++98 -Wshadow

clean :
	rm -rf ${obj}

fclean : clean
	rm -rf ${Name}

re: fclean all
