/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:09:29 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:09:30 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS
#define HUMANB_CLASS

#include "Weapon.hpp"

class HumanB
{
private:
  Weapon *weapon;
  std::string name;
public:
  void setWeapon(Weapon &weapon);
  HumanB(std::string name);
  ~HumanB();
  void attack();
};

#endif // !HUMANB_CLASS
