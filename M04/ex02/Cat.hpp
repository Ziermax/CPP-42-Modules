/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:29:28 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/28 20:00:29 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat: public Animal
{
	public:
		~Cat( void );
		Cat( void );
		Cat( Cat const &obj );

		void	makeSound( void ) const;
		void	expressFeelings( void ) const;

		Cat	& operator = ( Cat const &obj );

	private:
		Brain	*_brain;
};

#endif
