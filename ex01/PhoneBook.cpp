/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:33:45 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/13 15:49:15 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


// void search_feature()
// {
//     display_contact();
//     display_specific_contact();
// }
Contact &PhoneBook::get_Contact(int index)
{
    return contacts[index];
}
void PhoneBook::set_index(){
    this->contact_count = 0;
}
int PhoneBook::getIndex() {
    return this->contact_count;
}
// void exit_feature()
// {
//     quit_phonebook_program();   
// }