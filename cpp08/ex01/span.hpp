#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span{
private:
    unsigned int _size;
    std::vector<int> _intVector;
public:
    Span(void);
    ~Span();
    Span(unsigned int N);
    Span(Span const &src);
    Span &operator=(Span const &obj);
    void addNumber(int const &value);
    int shortestSpan();
    int longestSpan() const;
    class ClassIsFull : public std::exception{
    public:
        virtual const char *what() const throw(){
            return ("All the cells for storing numbers are already occupied");
        }
    };
    class NoSpanToFind : public std::exception{
    public:
        virtual const char *what() const throw(){
            return ("Give me more elements. It's not enough");
        }
    };

    template<typename Iterator>
    void addNumber(Iterator begin, Iterator end){
        if (_intVector.size() + std::distance(begin, end) > _size)
            throw ClassIsFull();
        while (begin != end)
            addNumber(*begin++);
    };
};

#endif
