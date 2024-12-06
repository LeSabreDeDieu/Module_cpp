/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:51:24 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/04 18:12:56 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Harl.hpp"
#include <stdlib.h>

using std::cout;
using std::endl;

void Usage() {
	cout << "./HarlFilter <level complaint>" << endl;
	exit(1);
}

int main(int argc, char const *argv[]) {

	if (argc != 2)
		Usage();
	
	Harl harl = Harl();
	harl.complain(std::string(argv[1]));

	return 0;
}
