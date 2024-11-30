/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:03:00 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/28 14:48:57 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	public:
		virtual	~WrongAnimal( void );
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const &obj );
		WrongAnimal( std::string const type );

		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;

		WrongAnimal	& operator = ( WrongAnimal const &obj );

	protected:
		std::string	_type;
};

#endif
