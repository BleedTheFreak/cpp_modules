# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 16:23:56 by ytaya             #+#    #+#              #
#    Updated: 2022/08/15 16:21:54 by ytaya            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name=Bureaucrat
SRC=Bureaucrat.cpp
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
