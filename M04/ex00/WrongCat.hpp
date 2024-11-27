/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:03:12 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/27 23:19:19 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>

class	WrongCat
{
	public:
		~WrongCat( void );
		WrongCat( void );
		WrongCat( WrongCat const &obj );

		std::string	getType( void ) const;

		WrongCat	& operator = ( WrongCat const &obj );

	private:
		std::string	_type;
};

#endif
