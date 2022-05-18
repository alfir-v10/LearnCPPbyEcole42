#ifndef ACCOUNT_HPP
# define ACCOUNT_HPP
# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>

class Account
{
public:
	Account();
	~Account();

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string phone_number;
	std::string darkest_secret;
	int			index;

	void		showAccount(void) const;
	void		addAccount(int index);
	void		showValue(std::string str) const;

private:
	void		_addData(std::string *str);
};

#endif
