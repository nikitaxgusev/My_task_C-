#include "Finder.h"
#include <iostream>
#include "MyTestFinder.h"

void testing(std::vector<int> v)
{
	if (MyUnitTest::MyEqualSort(v))
		std::cout << "Test passed!" << std::endl;
	else
		std::cout << "Test failed" << std::endl;
}
int main()
{
	std::vector<int> v;
	Finder *f=new Finder;
	v=f->find_words();

	testing(v);
	
	system("pause");
	delete f;
    return 0;
}

