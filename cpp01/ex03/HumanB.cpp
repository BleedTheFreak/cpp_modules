/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:09:27 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:09:28 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB(){
  std::cout << "HumanB Distractor called" << std::endl;
}

HumanB::HumanB(std::string name){
  this->name = name;
  std::cout << "HumanB Constracter Parameter called" << std::endl;
}

void HumanB::attack(){
  std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
  this->weapon = &weapon;
}
