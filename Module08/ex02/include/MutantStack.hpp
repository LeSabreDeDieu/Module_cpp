/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:39:12 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/24 13:36:35 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iterator>

//code for a stack
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	//define pour plus de simplicite
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	
	// Constructors and destructors
	MutantStack() : 
		std::stack<T>() 
	{};
	MutantStack(const MutantStack& other) : 
		std::stack<T>(other)	
	{};
	virtual ~MutantStack() {};

	/* Operator overloads */
	MutantStack& operator=(const MutantStack& other) {
		if (this != &other) {
			std::stack<T>::operator=(other);
		}
		return *this;
	};

	/* Member functions */
	iterator begin() { return std::stack<T>::c.begin(); }
	iterator end() { return std::stack<T>::c.end(); }
	const_iterator begin() const { return std::stack<T>::c.begin(); }
	const_iterator end() const { return std::stack<T>::c.end(); }
};

// code for a list
// #include <list>

// template <typename T>
// class MutantStack : public std::list<T> {
// public:
// 	//define pour plus de simplicite
// 	typedef typename std::list<T>::iterator iterator;
// 	typedef typename std::list<T>::const_iterator const_iterator;
	
// 	// Constructors and destructors
// 	MutantStack() : 
// 		std::list<T>() 
// 	{};
// 	MutantStack(const MutantStack& other) : 
// 		std::list<T>(other)	
// 	{};
// 	virtual ~MutantStack() {};

// 	/* Operator overloads */
// 	MutantStack& operator=(const MutantStack& other) {
// 		if (this != &other) {
// 			std::list<T>::operator=(other);
// 		}
// 		return *this;
// 	};

// 	/* Member functions */
// 	iterator begin() { return std::list<T>::begin(); }
// 	iterator end() { return std::list<T>::end(); }
// 	const_iterator begin() const { return std::list<T>::begin(); }
// 	const_iterator end() const { return std::list<T>::end(); }
// };

#endif //MUTANTSTACK_HPP