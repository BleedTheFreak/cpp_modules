/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:21:48 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 21:23:49 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
  try{
    Bureaucrat b = Bureaucrat("Yassine",1);
    std::cout << b << std::endl;
    b.increment();
    // b.decrement(); 
    std::cout << b << std::endl;
  }catch (std::exception &e){
    std::cout << e.what() << std::endl;
  }
  return 0;
}
