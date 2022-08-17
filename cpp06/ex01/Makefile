# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 16:23:56 by ytaya             #+#    #+#              #
#    Updated: 2022/08/15 18:44:30 by ytaya            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name=Serialization
SRC=serialization.cpp
obj=$(SRC:%.cpp=%.o)

all: $(Name) ${SRC}

$(Name): $(obj)
	c++ ${obj} main.cpp -Wall -Wextra -Werror -std=c++98 -o ${Name} 

${obj} : ${SRC}
	c++ ${SRC} -c -Wall -Wextra -Werror -std=c++98 

clean :
	rm -rf ${obj}

fclean : clean
	rm -rf ${Name}

re: fclean all
