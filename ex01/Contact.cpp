/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:33:37 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/13 16:02:57 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

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
std::string Contact::get_darkest_secret()
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
void Contact::set_darkest_secret(const std::string d_secret)
{
    darkset_secret = d_secret;
}
