/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:09:17 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:09:18 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name){
  Zombie *ret;
  ret = new Zombie[N];
  for (int i = 0; i < N; i++)
    ret[i] = Zombie(name);
  return ret;
}
