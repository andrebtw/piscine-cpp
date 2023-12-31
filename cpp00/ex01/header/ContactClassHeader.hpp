/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClassHeader.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:30:19 by anrodri2          #+#    #+#             */
/*   Updated: 2023/12/21 18:22:01 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTCLASSHEADER_H
#define CONTACTCLASSHEADER_H

class Contact
{
	public:
		Contact();
		~Contact();

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;
		void		displayIndexInfo(void) const;

		void		setFirstName(std::string);
		void		setLastName(std::string);
		void		setNickname(std::string);
		void		setPhoneNumber(std::string);
		void		setDarkestSecret(std::string);
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif