/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:24:51 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/18 16:24:53 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>

int check_index(std::string str) {
  for (unsigned int i = 0; i < str.length(); i++) {
    if (!isdigit(str[i]))
      return 0;
  }
  return 1;
}

int main() {
  PhoneBook phoneBook = PhoneBook();
  Contact contact = Contact();
  int index;
  std::string stream;
  std::string choice;
  std::string firstname;
  std::string lastname;
  std::string nickname;
  std::string phonenumber;
  std::string darksecret;

  std::cout << "=========== PhoneBook ===========" << std::endl;
  do {
    std::cout << "please enter you choice : ";
    std::getline(std::cin, choice);
    if (choice.empty()) {
      std::cin.clear();
      std::cin.ignore();
      continue;
    }
    if (choice == "ADD") {
      std::cout << "adding new contact" << std::endl;
      do {
        std::cout << "enter contact first name : ";
        std::getline(std::cin, firstname);
        contact.setFirstName(firstname);
      } while (firstname == "" && !std::cin.eof());
      do {
        std::cout << "enter contact last name : ";
        std::getline(std::cin, lastname);
        contact.setLastName(lastname);
      } while (lastname == "" && !std::cin.eof());
      do {
        std::cout << "enter contact nickname : ";
        std::getline(std::cin, nickname);
        contact.setNickName(nickname);
      } while (nickname == "" && !std::cin.eof());
      do {
        std::cout << "enter contact phone number : ";
        std::getline(std::cin, phonenumber);
        contact.setPhoneNumber(phonenumber);
      } while (phonenumber == "" && !std::cin.eof());
      do {
        std::cout << "enter contact dark secret : ";
        std::getline(std::cin, darksecret);
        contact.setDarkSecret(darksecret);
      } while (darksecret == "" && !std::cin.eof());
      phoneBook.ADD(contact);
      contact.contactRest();
    } else if (choice == "SEARCH") {
      phoneBook.savedContactDisplay();
      std::cout << "enter index of your contact : ";
        std::getline(std::cin, stream);
        std::istringstream(stream) >> index;
      if (!check_index(stream))
        phoneBook.SEARCH(100);
      else
        phoneBook.SEARCH(index);
    } else if (choice == "EXIT")
      phoneBook.EXIT();
    else
      std::cout << "Note : The program only accepts ADD, SEARCH and EXIT"
                << std::endl;
  } while (choice != "EXIT" && !std::cin.eof());
  std::cout << std::endl << "PhoneBook end !" << std::endl;
}
