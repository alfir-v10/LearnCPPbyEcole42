#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    index = -1;
}

PhoneBook::~PhoneBook(void)
{

}

std::string  to_upper(std::string str)
{
    for(long long unsigned int i = 0; i < str.size(); i++) {
        str.at(i) = toupper(str.at(i));
    }
    return str;
}

void	PhoneBook::executeCMD(void)
{
	std::cout << "Use the following cmd: ADD, SEARCH, EXIT" << std::endl;
	std::cout << "Enter cmd: ";
	while (input.length() == 0)
		std::getline(std::cin, input);
	std::cout << std::endl;
    input = to_upper(input);
	if (input == "EXIT")
		exit (0);
	else if (input == "SEARCH")
		searchAccounts();
	else if (input == "ADD") {
		if (index < 7)
			index++;
		else
			index = 0;
		accounts[index].addAccount(index);
		std::cout << std::endl;
		std::cout << "Account added!" << std::endl;
	}
	else {
		std::cout << "Command not found!" << std::endl;
	}
	input = "";
}

void	PhoneBook::searchAccounts(void)
{
    int flag = 1;
    while (flag) {
        std::cout << "Showing available accounts" << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
        std::cout << "|     index|first name| last name|  nickname|" << std::endl;
        for (int x = 0; x < 8; x++) {
            accounts[x].showAccount();
        }
        flag = _readIndex();
        int x = std::atoi(input.c_str()) - 1;
        if ((x >= 0 && x < 8) && accounts[x].index != -1) {
            std::cout << "---------------------------------------------" << std::endl;
            std::cout << "|     index|first name| last name|  nickname|" << std::endl;
            accounts[x].showAccount();
            std::cout << std::endl;
        } else {
            std::cout << std::endl;
            std::cout << "The requested index does not exist!" << std::endl << std::endl;
            flag = 0;
        }
    }
}

int	PhoneBook::_readIndex() {

	input = "";
	std::cout << std::endl;
	std::cout << "Enter contact index (from 1 to 8): ";
	while (1)
    {
		std::getline(std::cin, input);
		if (input.length() == 1 && std::isdigit(input[0]))
			break;
		else if (input.length() != 0) {
			std::cout << std::endl;
			std::cout << "Invalid value entered." << std::endl;
			std::cout << "Enter valid contact index (from 1 to 8): ";
            return 0;
		}
	}
    return 1;
}


void	PhoneBook::addAccount(void)
{
	accounts[index].addAccount(index);
}
