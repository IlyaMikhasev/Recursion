// Персональный шаблон
#include <iostream>
long long factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num-1)*num;
}
int fibonacci(int num) {
	if (num <= 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	//Задача 1 факториал числа
	/*
	std::cout << "Введите число:\n";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << "\n";
	*/
	//Задача 2 Число Фибоначи
	std::cout << "Введите номер числа Фибоначи: ";
	std::cin >> n;
	std::cout << "Число фибоначи под номером " << n << " = " << fibonacci(n) << '\n';
	std::cout << "Первые 13 чисел Фибоначи:\n";
	for (int i = 0; i < 13; i++)
		std::cout << fibonacci(i)<<", ";
	std::cout << "\b\b.\n";


	return 0;
}