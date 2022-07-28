/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:09:49 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:09:50 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
  std::cout << "Harl Constracter called" << std::endl;
}

Harl::~Harl() {
  std::cout << "Harl Distractor called" << std::endl;
}

void Harl::info() {
  std::cout << "INFO: ";
  std::cout
      << "I cannot believe adding extra bacon costs more money. You didn’t put "
         "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
      << std::endl;
}

void Harl::debug() {
  std::cout << "DEBUG: ";
  std::cout
      << "I love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
      << std::endl;
}

void Harl::warning() {
  std::cout << "WARNING: ";
  std::cout
      << "I think I deserve to have some extra bacon for free. I’ve been "
         "coming for years whereas you started working here since last month."
      << std::endl;
}

void Harl::error() {
  std::cout << "ERROR: ";
  std::cout << "This is unacceptable! I want to speak to the manager now."
            << std::endl;
}

void Harl::complain(std::string level) {

  for (u_int i = 0; i < level.length(); i++)
    level[i] = toupper(level[i]);

  this->levels[0] = "DEBUG";
  this->levels[1] = "INFO";
  this->levels[2] = "WARNING";
  this->levels[3] = "ERROR";
  this->table[0] = &Harl::debug;
  this->table[1] = &Harl::info;
  this->table[2] = &Harl::warning;
  this->table[3] = &Harl::error;

  int index = -1;

  for (int i = 0; i < 4; i++) {
    if (level == this->levels[i]) {
      index = i;
      break;
    }
  }

  if (index != -1)
    (this->*table[index])();
  else
    std::cerr << "Error : can't find this level of complain" << std::endl;
}
