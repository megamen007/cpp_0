/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phony.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:06:02 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/09 19:57:26 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int phone_menu()
{
    std::string choice;
    int value;
 
    std::cout << "    welcome to your awesome phonebook\n"
     << "   choose your option : \n"
     << "   - ADD -->  \"to save a new contact.\"\n"
     << "   - SEARCH -->  \"to display a specific contact.\"\n"
     << "   - EXIT -->  \"to quit the program.\"\n";
    std::getline(std::cin, choice);
    if (choice == "ADD")
        add_feature(); 
    // else if (choice == "SEARCH")
    //     // search_feature();
    // else if (choice == "EXIT")
    //     {
    //         std::cout << "u lost ur contacts forever$\n";
    //     }
}

int main ()
{
    PhoneBook draft;
    
    while(1)
    {
        phone_menu();
        std::cout << "invalid option try a coorect one\n";
    }
}