#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void iter(T *ptr, std::size_t len, void (*func)(T const &)){

    for (std::size_t i = 0; i < len; i++) {
        func(ptr[i]);
    }
}

#endif
