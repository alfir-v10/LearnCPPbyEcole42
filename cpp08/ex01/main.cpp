#include "span.hpp"
#include <iostream>
#include <list>
#define MAX_VALUE 10000
#define MAX_VALUE_EXTRA 50000

int main(){
    
    std::list<int> myList;
    for (int i=0; i < MAX_VALUE; i++)
        myList.push_back(i);

    Span mySpan = Span(MAX_VALUE);
    mySpan.addNumber(myList.begin(), myList.end());
    std::cout << mySpan.shortestSpan() << std::endl;
    std::cout << mySpan.longestSpan() << std::endl;
    std::cout << std::endl;

    Span mySpanExtra = Span(MAX_VALUE_EXTRA);
    for (int x = 0; x < MAX_VALUE_EXTRA; x++) {
        mySpanExtra.addNumber(x);
    }
    std::cout << mySpanExtra.shortestSpan() << std::endl;
    std::cout << mySpanExtra.longestSpan() << std::endl;
    std::cout << std::endl;

    try {
        mySpan.addNumber(1);
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    Span mySpanEmpty(2);
    try {
        std::cout << mySpanEmpty.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    Span mySpanOne(2);
    mySpanOne.addNumber(1);
    try {
        std::cout << mySpanOne.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
