/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 < anrodri2@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:30:32 by anrodri2          #+#    #+#             */
/*   Updated: 2023/12/22 14:49:12 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

size_t strlen(char *str)
{
	size_t i = 0;

	if (!str)
		return 0;
	while (str[i])
		i++;
	return i;
}

void to_upper_args_print(char **argv)
{
	size_t	tab_index = 1;
	char	to_print;

	while (argv[tab_index])
	{
		for (size_t x = 0; x < strlen(argv[tab_index]); x++)
		{
			to_print = std::toupper(argv[tab_index][x]);
			std::cout << to_print;
		}
		tab_index++;
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		to_upper_args_print(argv);
	}
	return (EXIT_SUCCESS);
}
