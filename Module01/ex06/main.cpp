/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:51:24 by sgabsi            #+#    #+#             */
/*   Updated: 2024/07/04 12:24:06 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {

	if (argc != 2)
		return 1;
	
	Harl harl = Harl();
	harl.complain(std::string(argv[1]));

	return 0;
}
