# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytaya <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 16:24:43 by ytaya             #+#    #+#              #
#    Updated: 2022/07/18 16:24:45 by ytaya            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name=PhoneBook
SRC=Contact.cpp PhoneBook.cpp
obj=$(SRC:%.cpp=%.o)

all: $(Name)

$(Name): $(obj)
	g++ ${obj} -Wall -Wextra -Werror -std=c++98 main.cpp -o ${Name}

${obj} : ${SRC}
	g++ -Wall -Wextra -Werror -std=c++98 -c ${SRC}

clean :
	rm -rf ${obj}

fclean : clean
	rm -rf ${Name}

re: fclean all
