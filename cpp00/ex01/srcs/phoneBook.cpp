/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:06:06 by sgabsi            #+#    #+#             */
/*   Updated: 2024/05/28 17:26:26 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"

phoneBook::phoneBook(){
	_contacts = new contact[8];
}

contact *phoneBook::getContacts() const { return _contacts; }

void	phoneBook::addContact(contact contact, int numContact){
	_contacts[numContact%8] = contact;
}
