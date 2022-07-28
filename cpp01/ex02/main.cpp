/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:09:20 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:09:21 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[]) {
  (void)argc;
  (void)argv;

  std::string string = "HI THI IS BRAIN";
  std::string *stringPTR = &string;
  std::string &stringREF = string;
  //==============================
  std::cout << &string << std::endl;
  std::cout << stringPTR << std::endl;
  std::cout << &stringREF << std::endl;
  //===============================
  std::cout << string << std::endl;
  std::cout << *stringPTR << std::endl;
  std::cout << stringREF << std::endl;

  return 0;
}
