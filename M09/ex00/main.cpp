#include "BitcoinExchange.hpp"
#include <iostream>

// data | value
// Year-Month-Day
// 0-1000 (float/int)

int	main(int ac, char **av)
{
	if (ac == 1)
		return std::cerr << "Error: could not open file." << std::endl, 1;
	else if (ac > 2)
		return std::cerr << "Error: only one file." << std::endl, 1;

	BitcoinExchange bit(av[1]);

	return 0;
}
