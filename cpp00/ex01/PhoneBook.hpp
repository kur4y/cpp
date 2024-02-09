/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:45:38 by tanota            #+#    #+#             */
/*   Updated: 2024/02/09 18:19:43 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _book[8];
		int	_countContact;
		void printContact(int index) const;

	public:
		PhoneBook ();
		~PhoneBook ();
		void	addContact();
		void	searchContact() const;
};

#endif
