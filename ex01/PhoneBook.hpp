/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:33:48 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/14 23:30:28 by mboudrio         ###   ########.fr       */
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
        PhoneBook &add_feature(int index);
        void incre_index();
        void search_feature();
        void display_contacts();
        void contacto(int index);        
        void display_specific_contact(int index);
        int contact_choice();

};
void empty_check(std::string msg, std::string &input);

#endif