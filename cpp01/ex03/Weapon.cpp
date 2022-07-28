/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:09:38 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:09:39 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
  this->type = type;
  std::cout << "Weapon Constracter Parameter called" << std::endl;
}

Weapon::Weapon(){
  std::cout << "Weapon Constracter called" << std::endl;
}

Weapon::~Weapon(){
  std::cout << "Weapon Distractor called" << std::endl;
}
std::string const & Weapon::getType() const{
  return this->type;
}

void Weapon::setType(std::string type)
{
  this->type = type;
}
