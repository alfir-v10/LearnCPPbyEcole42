#include "Account.hpp"

Account::Account(void)
{
    index = -1;
	std::string	first_name = "";
	std::string	last_name = "";
	std::string	nickname = "";
	std::string phone_number = "";
	std::string darkest_secret = "";
}

Account::~Account(void)
{
}

void	Account::addAccount(int index)
{
	std::cout << "Adding new contact. All fields must be filled." << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	this->index = index + 1;
	std::cout << "Enter your first name: " << std::endl;
	this->_addData(&this->first_name);
	std::cout << "Enter your last name: " << std::endl;
	this->_addData(&this->last_name);
	std::cout << "Enter your nickname: " << std::endl;
	this->_addData(&this->nickname);
	std::cout << "Enter your phone number: " << std::endl;
	this->_addData(&this->phone_number);
	std::cout << "Enter your darkest secret: " << std::endl;
	this->_addData(&this->darkest_secret);
}

void	Account::_addData(std::string *str)
{
	std::string		input;

	while (input.length() == 0)
		std::getline(std::cin, input);
	*str = input;
}

void	Account::showAccount(void) const
{
	if (this->index != -1)
	{
		std::cout << "|" << std::setw(10) << this->index << "|";
		showValue(this->first_name);
		showValue(this->last_name);
		showValue(this->nickname);
		std::cout << std::endl;
	}
}

void	Account::showValue(std::string str) const
{
	std::string		out;

	out = str;
	if (out.length() > 10)
	{
		out.erase(9);
		out.append(".");
		std::cout << std::setw(10) << out;
	}
	else
		std::cout << std::setw(10) << out;
	std::cout << "|";
}
