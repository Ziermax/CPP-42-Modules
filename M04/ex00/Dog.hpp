/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:25:23 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/27 17:54:28 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog: public Animal
{
	public:
		~Dog( void );
		Dog( void );
		Dog( Dog const &obj );

		void	makeSound( void ) const;

		Dog	& operator = ( Dog const &obj );
};

#endif
