/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:33:48 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/09 19:51:14 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int contact_count;
        
    public:
    
        void display_contact();
        void display_specific_contact(int i);
        void quit_phonebook_program();
        
        // void search_feature();  
};


#endif