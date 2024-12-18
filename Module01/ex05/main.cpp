/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:51:24 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:11:19 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;

int main( void )
{
	Harl harl = Harl();

	cout << "Debug level : " << endl;
	harl.complain("Debug");
	cout << endl;

	cout << "Info level : " << endl;
	harl.complain("Info");
	cout << endl;

	cout << "Warning level : " << endl;
	harl.complain("Warning");
	cout << endl;

	cout << "Error level : " << endl;
	harl.complain("Error");
	cout << endl;

	return 0;
}
