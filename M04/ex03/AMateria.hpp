/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:31:45 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/12/01 13:03:22 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class	AMateria
{
	public:
		virtual	~AMateria( void );
		AMateria( void );
		AMateria( std::string type );
		AMateria( AMateria const &obj );

		std::string const	&getType( void ) const;
		virtual AMateria	*clone( void ) const = 0;
		//virtual void		use( ICharacter& target );

		AMateria	& operator = ( AMateria const &obj );

	protected:
		std::string	_type;
};

#endif
