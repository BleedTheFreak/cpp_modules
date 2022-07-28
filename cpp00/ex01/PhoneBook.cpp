/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:24:59 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/18 16:26:36 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : size(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::ADD(Contact contact) {
  if (contact.checkContact()) {
    if (this->size <= 7) {
      this->contacts[this->size] = contact;
      this->size += 1;
    } else {
      for (int i = 0; i <= 6; i++) {
        this->contacts[i] = this->contacts[i + 1];
      }
      this->contacts[7] = contact;
    }
  } else
    std::cerr << "Error : A saved contact can’t have empty fields" << std::endl;
}

std::string print(std::string arg) {
  if (arg.length() > 10)
    return arg.substr(0, 9) + ".";
  return (arg);
}

void PhoneBook::savedContactDisplay() {
  std::cout << "|" << std::setw(15) << "index"
            << "|" << std::setw(15) << "firstName"
            << "|" << std::setw(15) << "lastName"
            << "|" << std::setw(15) << "nickName"
            << "|" << std::endl;
  for (int indexof = 0; indexof < this->size; indexof++) {
    std::cout << "|" << std::setw(15) << indexof << "|" << std::setw(15)
              << print(this->contacts[indexof].getFirstName()) << "|"
              << std::setw(15) << print(this->contacts[indexof].getLastName())
              << "|" << std::setw(15)
              << print(this->contacts[indexof].getNickName()) << "|"
              << std::endl;
  }
}

void PhoneBook::SEARCH(int indexof) const {
  if (indexof >= 0 && indexof <= 7 && this->contacts[indexof].checkContact()) {
    std::cout << "first name : " << this->contacts[indexof].getFirstName()
              << std::endl;
    std::cout << "last name : " << this->contacts[indexof].getLastName()
              << std::endl;
    std::cout << "nick name : " << this->contacts[indexof].getNickName()
              << std::endl;
    std::cout << "phone number : " << this->contacts[indexof].getPhone()
              << std::endl;
    std::cout << "dark secret : " << this->contacts[indexof].getSecret()
              << std::endl;
  } else
    std::cerr << "Error : this index in out of range or has empty fields"
              << std::endl;
}

void PhoneBook::EXIT() {
  std::cout << "PhoneBook end !" << std::endl;
  exit(0);
}
