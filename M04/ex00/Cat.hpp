/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:29:28 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/27 17:51:41 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal
{
	public:
		~Cat( void );
		Cat( void );
		Cat( Cat const &obj );

		void	makeSound( void ) const;

		Cat	& operator = ( Cat const &obj );
};

#endif
