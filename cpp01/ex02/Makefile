# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 16:23:56 by ytaya             #+#    #+#              #
#    Updated: 2022/07/24 23:09:23 by ytaya            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name=Reference

all: $(Name)

$(Name):
	c++ main.cpp -Wall -Wextra -Werror -std=c++98 -o ${Name} 


clean :
	rm -rf $(Name)

fclean : clean

re: fclean all
