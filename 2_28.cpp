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
	cout << ( x / 1000 ) - ( x / 10000 ) * 10 << " ";
	cout << ( x / 100 ) - ( x / 1000 ) * 10 << " ";
	cout << ( x / 10 ) - ( x / 100 ) * 10 << " ";
	cout << x - ( x / 10 ) * 10 << endl;
	return 0;
}
