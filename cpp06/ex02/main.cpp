#include "whatever.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

Base *generate(void);

void identify(Base *p);

void identify(Base &p);

int main(){
    Base *objRandom = generate();
    identify(objRandom);
    identify(*objRandom);
    delete objRandom;
    return (0);
}

Base *generate(void){
    std::cout << "Base * generate (void)" << std::endl;
    Base *ptr;
    int state;
    std::srand(std::time(NULL));
    state = std::rand() % 3;
    if (state == 0){
        std::cout << "Class A generated" << std::endl;
        ptr = new A;
    } else if (state == 1){
        std::cout << "Class B generated" << std::endl;
        ptr = new B;
    } else{
        std::cout << "Class C generated" << std::endl;
        ptr = new C;
    }
    return (ptr);
}


void identify(Base *p){
    std::cout << "identify(Base* p) called" << std::endl;
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p){
    std::cout << "identify (Base& p) called" << std::endl;
    try{
        A &a = dynamic_cast<A &>(p);
        static_cast<void>(a);
        std::cout << "A" << std::endl;
    }
    catch (const std::exception &e){

    }

    try{
        B &b = dynamic_cast<B &>(p);
        static_cast<void>(b);
        std::cout << "B" << std::endl;
    }
    catch (const std::exception &e){

    }

    try{
        C &c = dynamic_cast<C &>(p);
        static_cast<void>(c);
        std::cout << "C" << std::endl;
    }
    catch (const std::exception &e){

    }
}
