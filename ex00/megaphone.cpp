/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:33:44 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/01 22:55:58 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>



int main()
{
    std::string str;
    std::getline(std::cin, str);
    std::cout << "str--> " << str << std::endl;
}