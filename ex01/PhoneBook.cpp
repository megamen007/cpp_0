/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:33:45 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/14 20:19:08 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact &PhoneBook::get_Contact(int index)
{
    return contacts[index];
}
void PhoneBook::incre_index()
{
    this->contact_count++;
}


void PhoneBook::set_index()
{
    this->contact_count = 0;
}
int PhoneBook::getIndex()
{
    return this->contact_count;
}
