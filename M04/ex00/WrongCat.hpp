/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:03:12 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/28 14:59:02 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public:
		~WrongCat( void );
		WrongCat( void );
		WrongCat( WrongCat const &obj );

		void		makeSound( void ) const;

		WrongCat	& operator = ( WrongCat const &obj );
};

#endif
