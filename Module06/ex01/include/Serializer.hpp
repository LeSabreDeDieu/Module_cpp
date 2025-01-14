/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayfallahgabsi <sayfallahgabsi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:46:58 by sayfallahga       #+#    #+#             */
/*   Updated: 2025/01/14 14:08:59 by sayfallahga      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint>

typedef struct s_Data {
	std::string name;
	int age;
}				Data;

class Serializer {
public:
	// Constructors and destructors
	Serializer();
	Serializer(const Serializer& other);
	~Serializer();

	/* Operator overloads */
	Serializer& operator=(const Serializer& other);

	/* Member functions */
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif //SERIALIZER_HPP