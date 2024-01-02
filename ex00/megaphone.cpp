/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:33:44 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/02 17:05:41 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac,char **av)
{

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    
    int i;
    int j;
    
    i = 1;
    while(av[i])
    {
        j = 0;
        while(av[i][j])
        {
            std::putchar(std::toupper(av[i][j]));
            j++;
        }
        i++;
    }
}