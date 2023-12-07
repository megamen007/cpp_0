/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awesome_phonebook.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:06:02 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/08 00:53:25 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int phone_menu()
{
    std::string str;
    int value;
 
    std::cout << "    welcome to your awesome phonebook\n"
     << "   choose your option : \n"
     << "   - ADD -->  \"to save a new contact.\"\n"
     << "   - SEARCH -->  \"to display a specific contact.\"\n"
     << "   - EXIT -->  \"to quit the program.\"\n";
    std::cin >> str;
    if (str.compare("ADD") == 0)
        value = 1;
    else if (str.compare("SEARCH") == 0)
        value = 2;
    else if (str.compare("EXIT") == 0)
        value = 3;
    else 
        value = 0;
    return (value);
}

int main ()
{
    int value;

    value = phone_menu();
    if (value == 0)
    std::cout << "invalid option try a coorect one\n";
    else if (value == 1)
        add_feature();    
    else if (value == 2)
        search_feature();
    else if (value == 3)
        exit_feature();
}