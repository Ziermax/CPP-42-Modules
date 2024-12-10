/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:16:08 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/30 12:35:56 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	public:
		virtual ~Animal( void );
		Animal( void );
		Animal( Animal const &obj );
		Animal( std::string type );

		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const;

		Animal	& operator = ( Animal const &obj );

	protected:
		std::string	_type;
};

#endif