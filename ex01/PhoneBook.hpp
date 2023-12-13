/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:33:48 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/13 17:17:58 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
        int contact_count;
        Contact contacts[8];
    public:
        Contact& get_Contact(int index);
        void set_index();
        int getIndex();
        std::string phone_menu();
        PhoneBook add_feature(int index);
        void search_feature();
        void display_contacts();
        // void contacto(int index);
        
};


void empty_check(std::string msg, std::string input);

#endif