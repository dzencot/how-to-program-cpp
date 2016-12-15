//урок 2.25
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int x, y;
	cout << "Введите два числа: ";
	cin >> x >> y;
	cout << "Число " << x;
	if ( x % y == 0 ) {
		cout << " кратно числу ";
	} else {
		cout << " некратно числу ";
	}
	cout << y << endl;
	return 0;
}
