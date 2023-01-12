/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebin <grebin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:19:55 by grebin            #+#    #+#             */
/*   Updated: 2023/01/12 12:02:14 by grebin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	
	std::string		str;
	int				i = 0;
	size_t			j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (++i < ac)
	{
		j = -1;
		str = av[i];
		while (str[++j])
			std::cout << (char) toupper(str[j]);
	}
	std::cout << std::endl;
	return (0);
	
}