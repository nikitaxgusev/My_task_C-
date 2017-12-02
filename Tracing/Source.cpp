#include "Tracing.h"
#include <iostream>

void sum(int& a, double& b);
int main()
{
	std::string str("Hello");
	double num = 0.8932;
	int n = 8;

	doTrace(n + num)
	doTrace(str)
	sum(n,num);
	doTrace(n)
	doTrace(num)


	return 0;
}
void sum(int& a, double& b)
{
	a = 9;
	b = 0.9999;	
	doTrace(a + b)
}