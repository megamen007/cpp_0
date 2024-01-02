/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phony.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:06:02 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/02 19:57:21 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook &PhoneBook::add_feature(int index)
{
    std::string input;
    
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
    
    return *this;
}
void empty_check(std::string msg, std::string &input)
{
    while(1)
    {
        std::cout << msg;
        if (!std::getline(std::cin, input))
            exit(0);
        if (!input.empty())
        break;
    }
}
std::string PhoneBook::phone_menu()
{
    std::string choice;

    if (!std::getline(std::cin, choice))
        exit(0);
    if (choice != "ADD" && choice != "SEARCH" && choice != "EXIT")
    {
       std::cout << "Invalid option, try a correct one\n";
        exit(0);
    }
    return choice;
}

int valid_index(int a)
{
    if (a >= 0 && a < 8)
        return 1;
    return 0;
}


void PhoneBook::contact_choice()
{
    std::string c;
    int input_index = 0;
    std::cout << "do u want to see a specific contact \n";
    if (!std::getline(std::cin, c))
        exit(0);
    if (c.length() != 1)
    {
        std::cout << "Invalid INDEX , try a correct one" << std::endl;
        return ;
    }
    else 
        input_index = c[0] - 48;
    if (valid_index(input_index) == 1)
        display_specific_contact(input_index);
}
void formal_display(std::string field)
{
    if (field.length() >= 10){
        field[9] = '.';
        std::cout << field.substr(0, 10);
    }
    else
        std::cout << field;
        
}
void PhoneBook::contacto(int index)
{
    std::cout << "-CONTACT #" << index  << " <<----" << std::endl;
    std::cout << "Phone Number\t" << get_Contact(index).get_first_name() << std::endl;
    std::cout << "Phone Number\t" << get_Contact(index).get_last_name() << std::endl;
    std::cout << "Phone Number\t" << get_Contact(index).get_nick_name() << std::endl;
    std::cout << "Phone Number\t" << get_Contact(index).get_phone_number() << std:: endl;
    std::cout << "Darkset secret\t" << get_Contact(index).get_darkest_secret() << std::endl;
}

void PhoneBook::display_contacts()
{
    int i = 0;
        std::cout <<"        ---- PHONBOOK CONTACTS ----" << std::endl;
        std::cout << "*********************************************" << std::endl;
        std::cout << "|  Index   |Firstname | Lastname | Nickname |" << std::endl;
        std::cout << "*********************************************" << std::endl;
    while(i < 8) 
    {
     
        std::cout << "|"  << std::setw(10)  << i << "|"; 
        std::cout << std::setw(10);formal_display(get_Contact(i).get_first_name());
        std::cout << "|" << std::setw(10);formal_display(get_Contact(i).get_last_name());
        std::cout << "|" << std::setw(10);formal_display(get_Contact(i).get_nick_name());
        std::cout << "|\n";
        i++;
    }
    
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
    // int index;
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
            draft.contact_choice();
        }
        else if (choice == "EXIT")
        {
            std::cout << "U choose to EXIT Phone Book REALM **** ADIOS\n";
            break;
        }
    }
    return 0;
}
