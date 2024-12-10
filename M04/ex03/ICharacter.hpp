/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:53:38 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/12/01 13:11:43 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

class ICharacter
{
	public:
		virtual	~ICharacter( void ) {}

		virtual	std::string const	&getName( void ) const = 0;
		virtual void				equip( AMateria *mat ) = 0;
		virtual void				unequip( int idx ) = 0;
		virtual void				use( int idx, ICharacter& target ) = 0;
};

#endif
