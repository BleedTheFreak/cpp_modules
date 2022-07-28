/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:09:14 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:09:16 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS
#define ZOMBIE_CLASS

#include <iostream>
class Zombie
{
public:
  Zombie();
  ~Zombie();
  Zombie(std::string name);
  void announce();
private:
    std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
