/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:10:03 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:10:04 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {

  if (argc == 2) {
    Harl H = Harl();
    std::string level;
    level = argv[1];
    std::string levels[4];
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    int index = -1;
    for (int i = 0; i < 4; i++) {
      if (level == levels[i]) {
        index = i;
        break;
      }
    }
    switch (index) {
    case 0:
      H.debug();
    case 1:
      H.info();
    case 2:
      H.warning();
    case 3:
      H.error();
      break;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]"
                << std::endl;
    }
  }
  else {
    std::cout << "Usage : ./harlFilter level" << std::endl;
  }
  return 0;
}
