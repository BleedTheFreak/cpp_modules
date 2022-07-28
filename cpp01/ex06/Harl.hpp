/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:10:01 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:10:02 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARl_CLASS
#define HARl_CLASS

#include <iostream>

class Harl {

public:
  Harl();
  ~Harl();
  void debug();
  void info();
  void warning();
  void error();
};

#endif // !HARl_CLASS
