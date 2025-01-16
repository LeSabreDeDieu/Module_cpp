/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayfallahgabsi <sayfallahgabsi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:51:52 by sayfallahga       #+#    #+#             */
/*   Updated: 2025/01/16 13:39:15 by sayfallahga      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

using std::cout;
using std::endl;

int main( void )
{
	Data data = {"Sayf", 22};

	cout << "Data stored : \n\tName : " << data.name << "\n\tAge : " << data.age << endl;

	uintptr_t ptr = Serializer::serialize(&data);

	Data *other = Serializer::deserialize(ptr);

	cout << "Data stored after serialazation : \n\tName : " << other->name << "\n\tAge : " << other->age << endl;

	return 0;
}
