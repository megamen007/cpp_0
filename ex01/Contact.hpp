/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:33:33 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/14 23:28:03 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "iostream"
#include "string"

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkset_secret;
        
    public:
        void set_first_name(const std::string &fname);
        void set_last_name(const std::string &lname);
        void set_nick_name(const std::string &nname);
        void set_phone_number(const std::string &pnumber);
        void set_darkest_secret(const std::string &d_secret);
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nick_name();
        std::string get_phone_number();
        std::string get_darkest_secret();
};


#endif
