/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:49:01 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/28 20:10:59 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::~Brain(void)
{
	std::cout << "Brain destructor has been called, no more ideas" << std::endl;
	return ;
}

Brain::Brain(void)
{
	std::cout << "Brain void constructor has been called" << std::endl;
	for (int i = 0; i < _numIdeas; i++)
		_ideas[i] = "No idea";
	return ;
}

Brain::Brain(Brain const &obj)
{
	std::cout << "Brain copy constructor has been called" << std::endl;
	*this = obj;
}

std::string	Brain::getIdea(int idx) const
{
	if (idx < 0 || idx >= _numIdeas)
		return ("");
	return (_ideas[idx]);
}

void	Brain::setIdea(std::string idea, int idx)
{
	if (idx < 0 || idx >= _numIdeas)
		return ;
	_ideas[idx] = idea;
}

void	Brain::showIdeas(void) const
{
	for (int i = 0; i < _numIdeas; i++)
		std::cout << "Idea [" << i << "]: " << _ideas[i] << std::endl;
}

Brain	&Brain:: operator = (Brain const &obj)
{
	std::cout << "Brain copy assignation has been called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < _numIdeas; i++)
			_ideas[i] = obj._ideas[i];
	}
	return (*this);
}
