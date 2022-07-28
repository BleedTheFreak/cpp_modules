/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:25:18 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/18 16:26:24 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS
#define PHONEBOOK_CLASS

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
    private:
        Contact contacts[8];
        int size;
    public:
        PhoneBook();
        ~PhoneBook();
        void ADD(Contact contact);
        void SEARCH(int indexof) const;
        void  EXIT();
        void savedContactDisplay();
};

#endif
