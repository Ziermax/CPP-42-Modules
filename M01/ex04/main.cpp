/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:34:35 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/13 18:58:40 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	replace(char *fileNameChar, std::string keyWord, std::string replaceWord)
{
	std::ifstream	inFile;
	std::ofstream	outFile;
	std::string		line;
	std::string		fileNameStr;
	unsigned long	pos;

	inFile.open(fileNameChar);
	if (inFile.fail())
		return (std::cerr << "Failed opening file" << std::endl, 1);
	fileNameStr = fileNameChar;
	fileNameStr += ".replace";
	outFile.open(fileNameStr.c_str());
	while (inFile)
	{
		std::getline(inFile, line);
		pos = 0;
		while ((pos = line.find(keyWord, pos)) != std::string::npos)
		{
			line.erase(pos, keyWord.length());
			line.insert(pos, replaceWord);
		}
		outFile << line;
		if (!inFile.eof())
			outFile << std::endl;
		line.clear();
	}
	inFile.close();
	outFile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
	std::string	s1;
	std::string	s2;

	s1 = argv[2];
	s2 = argv[3];
	replace(argv[1], s1, s2);
}
