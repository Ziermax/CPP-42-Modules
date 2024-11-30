/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:48:49 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/30 12:02:04 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	public:
		~Brain( void );
		Brain( void );
		Brain( Brain const &obj );

		std::string	getIdea( int idx ) const;
		void		showIdeas( void ) const;
		void		setIdea( std::string idea, int idx );

		Brain	& operator = ( Brain const &obj );
		
	private:
		int static const	_numIdeas = 5;

	protected:
		std::string	_ideas[_numIdeas];
};

#endif
