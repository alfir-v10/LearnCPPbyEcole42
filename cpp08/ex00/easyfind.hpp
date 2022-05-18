#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <stdexcept>

class ValueNotFound: public std::exception {
public:
    virtual const char * what() const throw() {
        return ("Value not found!");
    }
};

template <typename T>
int easyfind(T &t, int find)
{
    typename T::iterator iter = std::find(t.begin(), t.end(), find);
    if (iter == t.end())
        throw ValueNotFound();
    return *iter;
}

#endif