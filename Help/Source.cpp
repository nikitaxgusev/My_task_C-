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
		std::cout << "���������� " << NAME_OF_VAR(bool_var) << " ���� "
			<< typeid(bool_var).name() << " ������� " << sizeof(bool_var) << " ����" << std::endl;
		std::cout << "���������� " << NAME_OF_VAR(int_var) << " ���� "
			<< typeid(int_var).name() << " ������� " << sizeof(int_var) << " ����" << std::endl;
		std::cout << "���������� " << NAME_OF_VAR(uint_var) << " ���� "
			<< typeid(uint_var).name() << " ������� " << sizeof(uint_var) << " ����" << std::endl;
		std::cout << "���������� " << NAME_OF_VAR(lint_var) << " ���� "
			<< typeid(lint_var).name() << " ������� " << sizeof(lint_var) << " ����" << std::endl;
		std::cout << "���������� " << NAME_OF_VAR(string_var) << " ���� "
			<< typeid(string_var).name() << " ������� " << sizeof(string_var) << " ����" << std::endl;
		std::cout << "���������� " << NAME_OF_VAR(char_var) << " ���� "
			<< typeid(char_var).name() << " ������� " << sizeof(char_var) << " ����" << std::endl;
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