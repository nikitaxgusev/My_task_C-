#include <iostream>

#define NAME_OF_VAR(VAR) #VAR

void task_1() {

		int a, b;

		std::cout << "Enter a: " << std::endl;
		std::cin >> a;

		std::cout << "Enter b: " << std::endl;
		std::cin >> b;

		std::cout << "Result: " << a << " + " << b << " = " << a + b << std::endl;
}

void task_3() {

		int a, b, c;

		std::cout << "Enter a: " << std::endl;
		std::cin >> a;

		std::cout << "Enter b: " << std::endl;
		std::cin >> b;

		std::cout << "Enter C: " << std::endl;
		std::cin >> c;

		if (a < b && a < c) {
			std::cout << "lowest: " << a <<std::endl;
		}
		else {
			if (b < a && b < c) {
				std::cout << "lowest: " << b << std::endl;
			}
			else
				std::cout << "lowest: " << c << std::endl;
		}
}

void task_2() {

		bool bool_var;
		int int_var;
		unsigned int uint_var;
		long int lint_var;
		std::string string_var;
		char char_var;

		setlocale(LC_ALL, "Russian");
		std::cout << "Переменная " << NAME_OF_VAR(bool_var) << " типа "
			<< typeid(bool_var).name() << " размера " << sizeof(bool_var) << " байт" << std::endl;
		std::cout << "Переменная " << NAME_OF_VAR(int_var) << " типа "
			<< typeid(int_var).name() << " размера " << sizeof(int_var) << " байт" << std::endl;
		std::cout << "Переменная " << NAME_OF_VAR(uint_var) << " типа "
			<< typeid(uint_var).name() << " размера " << sizeof(uint_var) << " байт" << std::endl;
		std::cout << "Переменная " << NAME_OF_VAR(lint_var) << " типа "
			<< typeid(lint_var).name() << " размера " << sizeof(lint_var) << " байт" << std::endl;
		std::cout << "Переменная " << NAME_OF_VAR(string_var) << " типа "
			<< typeid(string_var).name() << " размера " << sizeof(string_var) << " байт" << std::endl;
		std::cout << "Переменная " << NAME_OF_VAR(char_var) << " типа "
			<< typeid(char_var).name() << " размера " << sizeof(char_var) << " байт" << std::endl;
}

void task_4() {
	int a, b;
	std::cout << "Enter a: " << std::endl;
	std::cin >> a;

	std::cout << "Enter b: " << std::endl;
	std::cin >> b;

	/*TODO*/
}

int main()
{

	task_3();

	system("pause");
	return 0;
}