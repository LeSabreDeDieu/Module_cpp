/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:51:13 by sgabsi            #+#    #+#             */
/*   Updated: 2024/03/20 11:12:45 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac < 2){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	int i = 0;
	av++;
	while (av[i]){
		int j = 0;
		while (av[i][j]){
			av[i][j] = std::toupper(av[i][j]);
			std::cout << av[i][j];
			j++;
		}
		i++;
	}
	return 0;
}
