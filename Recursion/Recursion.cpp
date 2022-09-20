// ������������ ������
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
	//������ 1 ��������� �����
	/*
	std::cout << "������� �����:\n";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << "\n";
	*/
	//������ 2 ����� ��������
	std::cout << "������� ����� ����� ��������: ";
	std::cin >> n;
	std::cout << "����� �������� ��� ������� " << n << " = " << fibonacci(n) << '\n';
	std::cout << "������ 13 ����� ��������:\n";
	for (int i = 0; i < 13; i++)
		std::cout << fibonacci(i)<<", ";
	std::cout << "\b\b.\n";


	return 0;
}