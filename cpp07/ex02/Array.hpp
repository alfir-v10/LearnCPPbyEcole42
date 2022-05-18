#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <iostream>
# include <exception>

template<class T>
class Array{
private:
    T *_array;
    int _size;
public:
    Array(void);
    ~Array(void);
    Array(unsigned int n);
    Array(const Array &obj);
    Array &operator=(const Array &obj);
    T &operator[](int i);
    void printArrayData();
    unsigned int size();

    class OutOfRange: public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Exception: Index out of range";
        }
    };

};

template<class T>
Array<T>::Array(void) : _size(0){
    _array = 0;
}

template<class T>
Array<T>::Array(unsigned int n) : _size(n) {
    _array = new T[n];
}

template<class T>
Array<T>::Array(const Array &obj) : _array(0), _size(0){
    *this = obj;
}

template<class T>
Array<T>::~Array(void){
    delete[] _array;
}

template<class T>
Array<T> &Array<T>::operator=(const Array &obj){
    if (this != &obj) {
        delete[] _array;
        _array = 0;
        _size = obj._size;
        if (obj._size) {
            _array = new T[_size];
            for (int i = 0; i < obj._size; ++i) {
                _array[i] = obj._array[i];
            }
        }
    }
    return (*this);
}

template<class T>
T &Array<T>::operator[](int i){
    if (i < 0 || i >= _size)
        throw OutOfRange();
    return (_array[i]);
}

template<class T>
unsigned int Array<T>::size(){
    return (_size);
}

template<class T>
std::ostream &operator<<(std::ostream &o, Array<T> &a)
{
    o << "[Array size = " << a.size() << "]: [";
    for (unsigned int i = 0; i < a.size(); i++)
    {
        o << a[i];
        if (i < a.size() - 1)
            o << ", ";
    }
    o << "]";
    return o;
}
#endif
