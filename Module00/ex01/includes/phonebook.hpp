/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 21:57:27 by sgabsi            #+#    #+#             */
/*   Updated: 2024/06/27 08:27:23 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
private:
	Contact _repertoire[8];
	bool _isEmpty;
public:
	PhoneBook();
	const Contact *getRepertoire() const;
	bool isEmpty() const;
	void addContact(Contact contact);
};

ostream& operator<< (ostream &os, PhoneBook const &repertoire);
#endif