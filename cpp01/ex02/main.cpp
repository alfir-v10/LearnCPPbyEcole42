#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String address (original): "<< &str << std::endl;
    std::cout << "String address (pointer): "<< stringPTR << std::endl;
    std::cout << "String address (reference): "<< &stringREF << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "String (original): "<< str << std::endl;
    std::cout << "String (pointer): "<< *stringPTR << std::endl;
    std::cout << "String (reference): "<< stringREF << std::endl;
    return 0;
}
