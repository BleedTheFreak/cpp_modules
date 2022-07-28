/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:07:27 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:07:49 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(){
  std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
  std::cout << this->name<< " Destructor Called" << std::endl;
}

Zombie::Zombie()
{
  std::cout << "Default Constructor Called" << std::endl;
}

Zombie::Zombie(std::string name){
  this->name = name;
  std::cout << "Parameter Constructor Called" << std::endl;
}
