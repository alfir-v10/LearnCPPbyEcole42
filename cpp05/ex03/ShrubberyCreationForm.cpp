#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src.getName(), 145, 137)
{
    *this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
    if (this != &obj)
    {
        _target = obj._target;
    }
    return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

    std::ofstream	newFile;

    allowedToExecute(executor);
    newFile.open((_target + "_shrubbery").c_str());
    if (!newFile.is_open()) {
        std::cout << "Unable to create / open output file" << std::endl;
    } else {
		newFile << "         1" << std::endl;
		newFile << "        111" << std::endl;
		newFile << "       111111" << std::endl;
		newFile << "        1111" << std::endl;
		newFile << "      11111111" << std::endl;
		newFile << "     1111111111" << std::endl;
		newFile << "     1104200000" << std::endl;
		newFile << "     1111111111" << std::endl;
		newFile << "     0002100011" << std::endl;
		newFile << "     1111111111" << std::endl;
		newFile << "      1111111"<< std::endl;
		newFile << "        0000" << std::endl;
		newFile << "        0000" << std::endl;
		newFile << "        0000" << std::endl;
		newFile << "        0000" << std::endl;
		newFile << "        0000" << std::endl;
		newFile << "        0000" << std::endl;
		newFile.close();
    }
}
