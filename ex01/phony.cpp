/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phony.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:06:02 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/15 01:54:05 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook &PhoneBook::add_feature(int index)
{
    std::string input;
    // PhoneBook draft;

        empty_check("Enter the First name :\n", input);
        get_Contact(index).set_first_name(input);
        empty_check("Enter the Last name :\n", input);
        get_Contact(index).set_last_name(input);
        empty_check("Enter the Nick name :\n", input);
        get_Contact(index).set_nick_name(input);
        empty_check("Enter the Phone number :\n", input);
        get_Contact(index).set_phone_number(input);
        empty_check("Enter the Darkest secret :\n", input);
        get_Contact(index).set_darkest_secret(input);
    //    draft.incre_index();

    // return draft;
    return *this;
}
void empty_check(std::string msg, std::string &input)
{
    while(1)
    {
        std::cout << msg;
        std::getline(std::cin, input);
        if (!input.empty())
        break;
    }
}
std::string PhoneBook::phone_menu()
{
    std::string choice;

    std::getline(std::cin, choice);
    return choice;
}

int PhoneBook::contact_choice()
{
    int choice;
    
    std::cout << "do u want to see a specific contact \n";
    std::cin >> choice;
    
    if (std::cin.fail())
    {
        std::cout << "try an integer next time\n";
        std::cin.clear();
    }
    else
        return choice;
    return (9);
}

void PhoneBook::contacto(int index)
{
    std::cout << "-CONTACT #" << index  << " <<----" << std::endl;
    std::cout << "First Name:\t" << get_Contact(index).get_first_name() << std::endl;
    std::cout << "Last Name:\t" << get_Contact(index).get_last_name() << std::endl;
    std::cout << "Nick Name:\t" << get_Contact(index).get_nick_name() << std::endl;
    std::cout << "Phone Number\t" << get_Contact(index).get_phone_number() << std:: endl;
    std::cout << "Darkset secret\t" << get_Contact(index).get_darkest_secret() << std::endl;
}

void PhoneBook::display_contacts()
{
    int i = 0;
    std::cout << "---- PHONBOOK CONTACTS ----\n";
    while(i < 8) 
    {
        contacto(i);
        i++;
    }
    std::cout << std::endl;
} 

void PhoneBook::display_specific_contact(int index)
{
    contacto(index);
}

void PhoneBook::search_feature()
{
    display_contacts();
}

int main()
{
    PhoneBook draft;
    std::string choice;
    draft.set_index();
    int index;
    int flag;

    flag = 1;
    while (1)
    {
        if (flag)
        {
            std::cout << "    Welcome to your awesome phonebook\n"
                  << "              Choose your option : \n"
                  << "   - ADD -->  \"to save a new contact.\"\n"
                  << "   - SEARCH -->  \"to display a specific contact.\"\n"
                  << "   - EXIT -->  \"to quit the program.\"\n";
            flag = 0;
        }  
        choice = draft.phone_menu();
        if (choice == "ADD")
        {
            if (draft.getIndex() >= 0 && draft.getIndex() < 8)
            {
                draft.add_feature(draft.getIndex());
                draft.incre_index();
            }
            if (draft.getIndex() == 8)
                draft.set_index();
        }
        else if (choice == "SEARCH")
        {
            draft.search_feature();
            index = draft.contact_choice();
            if (index >= 0 && index < 8)
                draft.display_specific_contact(index);
            else
                std::cout << "not a valid integer \n";
        }
        else if (choice == "EXIT")
        {
            std::cout << "U choose to EXIT Phone Book REALM **** ADIOS\n";
            break;
        }
        else if (choice != "ADD" && choice != "SEARCH" && choice != "EXIT")
            std::cout << "Invalid option, try a correct one\n";
    }
    return 0;
}
