/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:33:37 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/09 19:48:40 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//getters members fns definitions :
std::string Contact::get_first_name()
{
    return first_name;
}
std::string Contact::get_last_name()
{
    return last_name;
}
std::string Contact::get_nick_name()
{
    return nick_name;
}
std::string Contact::get_phone_number()
{
    return phone_number;
}

//setters members fns definitions :
void Contact::set_first_name(const std::string fname)
{
     first_name = fname;
}
void Contact::set_last_name(const std::string lname)
{
    last_name = lname;   
}
void Contact::set_nick_name(const std::string nname)
{
    nick_name = nname;
}
void Contact::set_phone_number(const std::string pnumber)
{
    phone_number = pnumber;
}
Contact add_feature(const Contact& contact)
{
    std::string input;
    Contact modified_Contact = contact;
    
    std ::cout << "Enter the Firstname :\n";
    std::getline(std::cin, input);
    modified_Contact.set_first_name(input);
    modified_Contact.get_first_name();
    std::cout << "Enter the last name :\n";
    std::getline(std::cin, input);
    modified_Contact.set_last_name(input);
    modified_Contact.get_last_name();
    std::cout << "Enter the nick name :\n";
    std::getline(std::cin, input);
    modified_Contact.set_nick_name(input);
    modified_Contact.get_nick_name();
    std::cout << "Enter phone number :\n";
    std::getline(std::cin, input);
    modified_Contact.set_phone_number(input);
    modified_Contact.get_phone_number();
     
    return modified_Contact;
}