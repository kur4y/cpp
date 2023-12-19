/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:46:32 by tanota            #+#    #+#             */
/*   Updated: 2023/12/19 18:19:08 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iomanip>
# include <iostream>
# include <limits>

class Contact
{
	public:
		Contact (void);
		~Contact (void);
		void	addContact();
		void	search() const;
		
	private:
		std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
};

#endif