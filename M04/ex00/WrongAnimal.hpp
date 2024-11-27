/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:03:00 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/27 23:19:25 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	public:
		~WrongAnimal( void );
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const &obj );

		std::string	getType( void ) const;

		WrongAnimal	& operator = ( WrongAnimal const &obj );

	private:
		std::string	_type;
};

#endif
