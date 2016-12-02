//урок 2.28
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int x;
	cout << "Введите число из пяти цифр:";
	cin >> x;
	cout << x / 10000 << " ";
	x = x - x / 10000;
	cout << x / 1000 << " ";
	x = x - x / 1000;
	cout << x / 100 << " ";
	x = x - x / 100;
	cout << x / 10 << " ";
	x = x - x / 10;
	cout << x << endl;
	return 0;
}
