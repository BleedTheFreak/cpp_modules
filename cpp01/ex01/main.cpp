/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:07:58 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:07:59 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (int argc, char *argv[])
{
  (void) argc;
  (void) argv;

  Zombie *z =  zombieHorde(3, "Yasine");
  int i = 0;
  while (i < 3) {
    z[i].announce();
    i++;
  }
  delete [] z; 

  return 0;
}
