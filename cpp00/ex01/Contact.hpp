/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:24:31 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/18 16:24:32 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS
#define CONTACT_CLASS

#include <iostream>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkSecret;

public:
    Contact();
    Contact(std::string firstName,std::string lastName,std::string nickName,std::string phoneNumber,std::string darkSecret);
    ~Contact();
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhone() const;
    std::string getSecret() const;
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setNickName(std::string nickName);
    void setPhoneNumber(std::string phoneNumber);
    void setDarkSecret(std::string darkSecret);
    bool checkContact() const;
    void contactRest();
};

#endif
