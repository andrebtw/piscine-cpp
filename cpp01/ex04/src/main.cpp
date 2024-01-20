/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:41:08 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/20 00:54:17 by anrodri2         ###   ########.fr       */
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
	// STRING FIND & REPLACE SET
	std::string	str_find = argv[S1_INDEX];
	std::string	str_replace = argv[S2_INDEX];

	// INPUT FILE OPENING
	std::ifstream	in_file(argv[FILE_INDEX]);
	if (!in_file.is_open())
		return (print_err("File not found or cannot be opened.", "Please enter a valid filename", EXIT_FAILURE));

	// OUTPUT FILE CREATION
	std::ofstream	out_file((std::string(argv[FILE_INDEX]) + ".replace").c_str());
	if (!out_file.is_open())
		return (print_err("File cannot be created.", "Please make sure valid permissions are set.", EXIT_FAILURE));

	// LOOPING EACH EOL TO CONVERT FILE TO STRING
	std::string	buffer;
	std::string	file_str;

	std::getline(in_file, buffer);
	while (true)
	{
		file_str = file_str + buffer;
		if (in_file.eof())
			break ;
		file_str = file_str + '\n';
		std::getline(in_file, buffer);
	}

	// LOOP TO FIND EACH INDEX TO EACH STRING TO REPLACE
	size_t	index = file_str.find(argv[S1_INDEX]);

	while (index != std::string::npos)
	{
		file_str.erase(index, str_find.size());
		file_str.insert(index, str_replace);
		index = index + str_replace.size();
		index = file_str.find(str_find, index);
	}
	out_file << file_str;

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
