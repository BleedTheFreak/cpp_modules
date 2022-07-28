/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:09:25 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:09:26 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS
#define HUMANA_CLASS

#include "Weapon.hpp"

class HumanA
{
private:
  Weapon &weapon;
  std::string name;
public:
  HumanA(std::string name, Weapon &weapon);
  ~HumanA();
  void attack();
};

#endif
