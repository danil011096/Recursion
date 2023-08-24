#include <iostream>


long long factorial(int num) {
	if (num <= 0)
		return 1;
	if (num < 0)
		return 0;
	return factorial(num - 1) * num;
}
int fibonacci(int num) {
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num-1) + fibonacci(num -2);
}


int main () {
	setlocale(LC_ALL, "Russian");
		int n;

		//Задание "Факториал"
		std::cout << "Введите число -> ";
		std::cin >> n;
		std::cout << n << "! = " << factorial(n) << std::endl;

		//Задание 1. Число Ивана Фибоначчи 
		std::cout << "Задание 1.\nВведите номер числа фибоначчи -> ";
		std::cin >> n;

		std::cout << "Число Фибоначчи = " << fibonacci(n) << std::endl;

		std::cout << "Первые 13 чисел Фибоначчи: ";
		for (int i = 0; i < 13; i++)
			std::cout << fibonacci(i) << " ";
		std::cout << std::endl;

		return 0;
}