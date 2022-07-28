/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:24:21 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/18 16:24:24 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string firstName, std::string lastName,
                 std::string nickName, std::string phoneNumber,
                 std::string darkSecret) {
  this->firstName = firstName;
  this->lastName = lastName;
  this->nickName = nickName;
  this->phoneNumber = phoneNumber;
  this->darkSecret = darkSecret;
}

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::getFirstName() const { return this->firstName; }

std::string Contact::getLastName() const { return this->lastName; }

std::string Contact::getNickName() const { return this->nickName; }

std::string Contact::getPhone() const { return this->phoneNumber; }

std::string Contact::getSecret() const { return this->darkSecret; }

void Contact::setFirstName(std::string firstName) {
  if (firstName != "")
    this->firstName = firstName;
  else
    std::cerr << "this field must not be empty" << std::endl;
}

void Contact::setLastName(std::string lastName) {
  if (lastName != "")
    this->lastName = lastName;
  else
    std::cerr << "this field must not be empty" << std::endl;
}

void Contact::setNickName(std::string nickName) {
  if (nickName != "")
    this->nickName = nickName;
  else
    std::cerr << "this field must not be empty" << std::endl;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
  if (phoneNumber != "")
    this->phoneNumber = phoneNumber;
  else
    std::cerr << "this field must not be empty" << std::endl;
}

void Contact::setDarkSecret(std::string darkSecret) {
  if (darkSecret != "")
    this->darkSecret = darkSecret;
  else
    std::cerr << "this field must not be empty" << std::endl;
}

bool Contact::checkContact() const {
  return (this->firstName != "" && this->lastName != "" &&
          this->nickName != "" && this->phoneNumber != "" &&
          this->darkSecret != "");
}

void Contact::contactRest() {
  this->firstName = this->lastName = this->nickName = this->phoneNumber =
      this->darkSecret = "";
}
