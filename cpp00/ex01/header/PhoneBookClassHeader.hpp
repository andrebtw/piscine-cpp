/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClassHeader.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 < anrodri2@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:30:21 by anrodri2          #+#    #+#             */
/*   Updated: 2023/12/22 15:38:52 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKCLASSHEADER_H
#define PHONEBOOKCLASSHEADER_H

#include "header.hpp"

class PhoneBook
{
	public:		
		PhoneBook();
		~PhoneBook();

		int	createContact(void);
		int	printAllContacts(void);
	
	private:
		Contact	contact[8];
		size_t	index;
		int		is_max_index;
};

#endif