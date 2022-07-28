/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:09:51 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:09:52 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARl_CLASS
#define HARl_CLASS

#include <iostream>

class Harl {

  typedef void (Harl::*functionPointer)();

public:
  Harl();
  ~Harl();
  void complain(std::string level);
  functionPointer table[4];
  std::string levels[4];

private:
  void debug();
  void info();
  void warning();
  void error();
};

#endif // !HARl_CLASS
