/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:09:41 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:09:42 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS
#define WEAPON_CLASS
#include <iostream>

class Weapon
{
public:
  Weapon();
  Weapon(std::string type);
  ~Weapon();
  std::string const & getType() const;
  void setType(std::string type);

private:
    std::string type;
};

#endif
