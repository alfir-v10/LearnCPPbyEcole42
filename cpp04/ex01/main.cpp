#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void){
	int		N = 2;
	Animal	*arr[N];
	for (int i = 0; i < N; i++){
		if (i % 2 == 0)
            arr[i] = new Dog();
		else
            arr[i] = new Cat();
	}

	for (int i = 0; i < N; i++)
		delete arr[i];

    return 0;
}
