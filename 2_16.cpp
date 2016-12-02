#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int x;
	int y;
	cout << "Введите два числа: ";
	cin >> x >> y;
	cout << endl << "Вы ввели " << x << " и " << y << endl;
	cout << "Сумма равна: " << x + y << endl;
	cout << "Произведение равно: " << x * y << endl;
	cout << "Разность равна: " << x - y << endl;
	cout << "Частное равно: " << x / y << endl;
}
