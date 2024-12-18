/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:26:15 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:12:09 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>
#include <string>

class Harl {
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	struct Complaint {
		std::string level;
		void ( Harl::*action )( void );
	} Complaints[4];
public:
	Harl();
	~Harl();

	void complain( std::string level );
};


#endif //HARL_HPP