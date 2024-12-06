/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:26:15 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/04 10:31:11 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

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


#endif //__HARL_HPP__