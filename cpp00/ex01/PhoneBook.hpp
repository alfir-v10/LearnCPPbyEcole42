#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Account.hpp"

class PhoneBook
{
public:

	PhoneBook(void);
	~PhoneBook(void);

	std::string	input;
	int			index;
	Account 	accounts[8];
	void		executeCMD(void);
	void		searchAccounts(void);
	void		addAccount(void);

private:
	int		_readIndex();
	std::string	commands[5];
};

#endif
