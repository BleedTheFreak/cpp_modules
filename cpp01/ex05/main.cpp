/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:09:53 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:09:54 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
  (void)argv;
  (void)argc;

  Harl H = Harl();
  H.complain("info");
  H.complain("DEBUG");
  H.complain("WARNING");
  H.complain("eRror");
  return 0;
}
