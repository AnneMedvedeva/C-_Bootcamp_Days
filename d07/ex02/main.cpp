#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>
#include "Array.hpp"

int				main(void)
{
	srand(time(0));
	int	n = rand() % 10;
	Array<int> test(n);

	std::cout << "Size of Array made: " << test.size() << std::endl << std::endl <<
		"Now filling array with random stuff and printing it" << std::endl
		<< "(will print one past extra for error exception)" << std::endl << std::endl;;

	try
	{
		unsigned int i = 0;
		while (i < test.size())
		{
			test[i] = rand() % 100;
			i++;
		}
		i = 0;
		while (i <= test.size())
		{
			std::cout << "Array[" << i << "] Content: " << test[i] << std::endl;
			i++;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
