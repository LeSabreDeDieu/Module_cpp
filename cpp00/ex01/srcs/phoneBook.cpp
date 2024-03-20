/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:06:06 by sgabsi            #+#    #+#             */
/*   Updated: 2024/03/20 14:00:05 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.h"

phoneBook::phoneBook(){
	_contacts = NULL;
}

contact *phoneBook::getContacts() const { return _contacts; }

void	phoneBook::addContact(contact contact, int numContact){
	_contacts[numContact%8] = contact;
}
