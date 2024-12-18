/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:26:15 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:11:14 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	struct Complaint
	{
		std::string level;
		void (Harl::*action)(void);
	} _Complaints[4];
public:
	Harl( void );
	~Harl();

	void complain( std::string level );
};

#endif //HARL_HPP