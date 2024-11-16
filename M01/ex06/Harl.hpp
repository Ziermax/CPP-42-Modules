/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:10:40 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/13 19:16:13 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

enum e_comment
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Harl
{
	public:
		Harl( void );
		~Harl( void );
		void	filter( std::string level );

	private:
		void		_debug( void );
		void		_info( void );
		void		_warning( void );
		void		_error( void );
		void		_noComplain( void );
		std::string	_levels[4];
		void 		(Harl::*_comments[4])( void );
};

#endif