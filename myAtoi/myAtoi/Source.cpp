#include <iostream>


int myAtoi(char* str)
{
	int res = 0; 
	int sign = 1;
	int i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;  
	}
	for (; str[i] != '\0'; ++i) {
		res = res * 10 + str[i] - '0';
	}

	// return result.
	return sign*res;
}


int main()
{
	char str[]="-1";
	int value  = myAtoi(str);
	std::cout << value;
	system("pause");
	return 0;
}