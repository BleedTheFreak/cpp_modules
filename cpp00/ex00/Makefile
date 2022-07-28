# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytaya <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 16:23:56 by ytaya             #+#    #+#              #
#    Updated: 2022/07/18 16:23:57 by ytaya            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name=megaphone
SRC=megaphone.cpp
obj=$(SRC:%.cpp=%.o)

all: $(Name)

$(Name): $(obj)
	g++ ${obj} -Wall -Wextra -Werror -std=c++98 -o ${Name} 

${obj} : ${SRC}
	g++ -c -Wall -Wextra -Werror -std=c++98 -o ${obj} ${SRC}

clean :
	rm -rf ${obj}

fclean : clean
	rm -rf ${Name}

re: fclean all
