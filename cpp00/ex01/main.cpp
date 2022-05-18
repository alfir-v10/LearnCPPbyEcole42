#include "PhoneBook.hpp"

int		main(void)
{
	PhoneBook	book;

	std::cout << "WELCOME, DEAR FRIEND!" << std::endl;
	std::cout << "#############################################" << std::endl;
	while (1)
	{
		book.executeCMD();
	}
}
