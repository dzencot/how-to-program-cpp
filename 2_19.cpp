//урок 2.19
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int x, y, z;
	cout << "Введите три различных числа: ";
	cin >> x >> y >> z;
	cout << "Сумма равна: " << x + y + z << endl;
	cout << "Среднее значение равно: " << (x + y + z) / 3 << endl;
	cout << "Произведение равно: " << x * y * z << endl;
	cout << "Наименьшее равно: ";
	if ( x <= y && x <= z ) {
		cout << x << endl;
	} else if ( y <= x && y <= z ) {
		cout << y << endl;
	} else {
		cout << z << endl;
	}
	cout << "Наибольшее равно: ";
	if ( x >= y && x >= z ) {
		cout << x << endl;
	} else if ( y >= x && y >= z ) {
		cout << y << endl;
	} else {
		cout << z << endl;
	}
	return 0;
}
