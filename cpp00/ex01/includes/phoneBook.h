/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:04:20 by sgabsi            #+#    #+#             */
/*   Updated: 2024/03/20 14:00:03 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.h"

class phoneBook
{
private:
	contact *_contacts;
public:
	phoneBook();

	contact *getContacts() const;
	void	addContact(contact contact, int numContact);
};

#endif