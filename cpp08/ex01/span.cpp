#include "span.hpp"
#include <algorithm>

Span::Span(void){
}

Span::~Span(){
}

Span::Span(unsigned int N) : _size(N){
}

Span::Span(Span const &src){
    *this = src;
}

Span &Span::operator=(Span const &obj){

    if (this != &obj) {
        _intVector = obj._intVector;
        _size = obj._size;
    }
    return *this;
}

void Span::addNumber(const int &value){

    if (_intVector.size() < _size)
        _intVector.push_back(value);
    else
        throw ClassIsFull();
}

int Span::longestSpan() const{

    if (_intVector.size() <= 1)
        throw NoSpanToFind();
    return (*std::max_element(_intVector.begin(), _intVector.end()) - *std::min_element(_intVector.begin(), _intVector.end()));
}

int Span::shortestSpan(){
    int span = INT_MAX;
    if (_intVector.size() <= 1)
        throw NoSpanToFind();
    else {
        std::vector<int>::const_iterator iter;
        std::sort(_intVector.begin(), _intVector.end());
        for (iter = _intVector.begin(); iter != _intVector.end(); ++iter) {
            if ((iter + 1) != _intVector.end() && *(iter + 1) - *iter < span)
                span = *(iter + 1) - *iter;
        }
    }
    return span;
}
