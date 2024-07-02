/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:14:42 by sgabsi            #+#    #+#             */
/*   Updated: 2024/06/27 11:31:00 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string str = "HI THIS IS BRAIN";
	string *stringPTR = &str;
	string &stringREF = str;

	cout << "Adresse : " << endl;
	cout << "str \t\t: " << &str << endl;
	cout << "stringPTR \t: " << &stringPTR << endl;
	cout << "stringREF \t: " << &stringREF << endl;
	
	cout << endl;

	cout << "Valeur : " << endl;
	cout << "str \t\t: " << str << endl;
	cout << "stringPTR \t: " << stringPTR << endl;
	cout << "stringREF \t: " << stringREF << endl;

	return 0;
}
