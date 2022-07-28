/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:09:12 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:09:13 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(){
  std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
  std::cout << "Distractor Called" << std::endl;
}

Zombie::Zombie()
{
  std::cout << "Default Constracter Called" << std::endl;
}

Zombie::Zombie(std::string name): name(name){
  std::cout << "Parameter Constracter Called" << std::endl;
}
