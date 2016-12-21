//урок 4.30
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	double radius;
	double pi = 3.14159;
	cout << "Введите радиус: ";
	cin >> radius;
	cout << "Диаметр равен: " << 2 * radius << endl;
	cout << "Длина окружности равна: " << 2 * pi * radius << endl;
	cout << "Площадь равна: " << pi * radius * radius << endl;
	return 0;
}
