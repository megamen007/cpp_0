/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phony.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:06:02 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/13 17:17:33 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook PhoneBook::add_feature(int index)
{
    std::string input;
    PhoneBook draft;

        empty_check("Enter the First name :\n", input);
        draft.get_Contact(index).set_first_name(input);
        empty_check("Enter the Last name :\n", input);
        draft.get_Contact(index).set_last_name(input);
        empty_check("Enter the Nick name :\n", input);
        draft.get_Contact(index).set_nick_name(input);
        empty_check("Enter the Phone number :\n", input);
        draft.get_Contact(index).set_phone_number(input);
        empty_check("Enter the Darkest secret :\n", input);
        draft.get_Contact(index).set_darkest_secret(input);
        this->contact_count++;

    return draft;
}
void empty_check(std::string msg, std::string input)
{
    while(1)
    {
        std::cout<< msg;
        std::getline(std::cin, input);
        if (!input.empty())
        break;
    }
}
std::string PhoneBook::phone_menu()
{
    std::string choice;

    std::cout << "    Welcome to your awesome phonebook\n"
              << "   Choose your option : \n"
              << "   - ADD -->  \"to save a new contact.\"\n"
              << "   - SEARCH -->  \"to display a specific contact.\"\n"
              << "   - EXIT -->  \"to quit the program.\"\n";
    std::getline(std::cin, choice);
    return choice;
}

void Contact::contacto(int index)
{
    std::cout << "-CONTACT #" << index << " <<----" << std::endl;
    std::cout << "First Name:\t" << this->first_name << std::endl;
    std::cout << "Last Name:\t" << this->last_name << std::endl;
    std::cout << "Nick Name:\t" << this->nick_name << std::endl;
    std::cout << "Phone Number\t" << this->phone_number << std:: endl;
    std::cout << "Darkset secret\t" << this->darkset_secret << std::endl;
}

void PhoneBook::display_contacts()
{
    int i = 0;
    std::cout << "---- PHONBOOK CONTACTS ----\n";
    while(i < 8) 
    {
        this->contacts[i].contacto(i);
        i++;
    }
    std::cout << std::endl;
} 

void PhoneBook::search_feature()
{
    display_contacts();
}

int main() {
    PhoneBook draft;
    std::string choice;
    draft.set_index();
    

    while (1) {
        choice = draft.phone_menu();
        if (choice == "ADD")
        {
            if (draft.getIndex() >= 0 && draft.getIndex() < 8)
                 draft.add_feature(draft.getIndex());
            if (draft.getIndex() == 8)
                    draft.set_index();
        }
        // else if (choice == "SEARCH")
        // {
        //     draft.search_feature();
        // }
        else
            std::cout << "Invalid option, try a correct one\n";
    }

    return 0;
}
