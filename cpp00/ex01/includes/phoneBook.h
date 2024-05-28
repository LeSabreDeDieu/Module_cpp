/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:04:20 by sgabsi            #+#    #+#             */
/*   Updated: 2024/05/28 17:21:12 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.h"

class phoneBook
{
public:
	contact *_contacts;
	phoneBook();

	contact *getContacts() const;
	void	addContact(contact contact, int numContact);
};

#endif