/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:07:18 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:07:49 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (int argc, char *argv[])
{
  (void) argc;
  (void) argv;

  randomChump("Hamza"); 
  Zombie *z = newZombie("Yassine");

  delete z;

  return 0;
}
