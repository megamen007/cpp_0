/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:33:45 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/08 00:52:04 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void add_feature()
{
    std::cout << "Enter the First name :\n";
    std::getline(std::cin, CONTACT.first_name);

    std::cout << "Enter the last name :\n";
    std::getline(std::cin, CONTACT.last_name);

    std::cout << "Enter the nick name :\n";
    std::getline(std::cin, CONTACT.nick_name);

    add_contact();
}

void search_feature()
{
    display_contact();
    display_specific_contact();
}

void exit_feature()
{
    quit_phonebook_program();   
}