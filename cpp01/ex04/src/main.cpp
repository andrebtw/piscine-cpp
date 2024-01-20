/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:41:08 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/20 00:09:31 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#define FILE_INDEX 1
#define S1_INDEX   2
#define S2_INDEX   3

#define KNORMAL "\x1B[0m"
#define KRED "\x1B[31m"
#define KGREEN "\x1B[32m"
#define KYELLOW "\x1B[33m"
#define KBLUE "\x1B[34m"
#define KWHITE "\x1B[37m"

int	print_err(std::string err_msg, std::string advice_msg, int err_code)
{
	std::cerr << KRED << err_msg << KNORMAL << std::endl << KYELLOW << advice_msg << KNORMAL << std::endl; 
	return (err_code);
}

int	input_error_check(int argc, char **argv)
{
	if (argc - 1 != 3)
		return (print_err("Wrong argument number.", "Please enter these three parameters in the following order: a filename and two strings, s1 and s2.", EXIT_FAILURE));
	if (!argv[FILE_INDEX])
		return (print_err("Empty file name.", "Please enter a valid filename.", EXIT_FAILURE));
	if (!argv[S1_INDEX] || !argv[S2_INDEX])
		return (print_err("Empty string.", "Please enter a valid strings", EXIT_FAILURE));
	return (EXIT_SUCCESS);
}

int	my_sed(char **argv)
{
	// INPUT FILE OPENING
	std::ifstream	in_file(argv[FILE_INDEX]);
	if (!in_file.is_open())
		return (print_err("File not found or cannot be opened.", "Please enter a valid filename", EXIT_FAILURE));

	// OUTPUT FILE CREATION
	std::ofstream	out_file((std::string(argv[FILE_INDEX]) + ".replace").c_str());
	if (!out_file.is_open())
		return (print_err("File cannot be created.", "Please make sure valid permissions are set.", EXIT_FAILURE));

	// CLOSING FILES
	in_file.close();
	out_file.close();
	return (EXIT_SUCCESS);
}

int	main(int argc, char **argv)
{
	if (input_error_check(argc, argv))
		return (EXIT_FAILURE);
	if (my_sed(argv))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
