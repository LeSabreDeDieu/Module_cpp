/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayfallahgabsi <sayfallahgabsi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:51:52 by sayfallahga       #+#    #+#             */
/*   Updated: 2025/01/14 14:05:13 by sayfallahga      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>


using std::cout;
using std::endl;

int main( void )
{
	Data data = {"Sayf", 22};

	cout << "Data stored : \nName : " << data.name << "\nAge : " << data.age << endl;

	uintptr_t ptr = Serializer::serialize(&data);

	Data *other = Serializer::deserialize(ptr);

	cout << "Data stored after serialazation : \nName : " << other->name << "\nAge : " << other->age << endl;

	return 0;
}
