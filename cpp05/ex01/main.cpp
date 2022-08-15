/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:22:07 by ytaya             #+#    #+#             */
/*   Updated: 2022/08/15 21:28:46 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
  try {
    Bureaucrat b = Bureaucrat("Yassine",10);
    std::cout << b << std::endl;
    Form f = Form("3a9d zwaj",20,50);
    std::cout << f << std::endl;
    f.beSigned(b);
    std::cout << f << std::endl;
  }catch(std::exception &e){
    std::cout << e.what() << std::endl;
  }

  return 0;
}
