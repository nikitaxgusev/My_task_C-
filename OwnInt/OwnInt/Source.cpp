#include "OwnInt.h"
#include <iostream>

int main()
{
	
	OwnInt a(2);
	
	if (a ==a) {
		std::cout << "Ok" << std::endl;
	}
	else {
		std::cout << "notOk" << std::endl;
	}

	std::cout <<a++ <<std::endl;
	std::cout << a << std::endl;

	system("pause");
	return 0;
}