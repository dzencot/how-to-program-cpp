//урок 2.18
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int x, y;
	cout << "Введите два числа: ";
	cin >> x >> y;
	if ( x > y ) {
		cout << x << " больше" << endl;
	} else if ( y > x ) {
		cout << y << " больше" << endl;
	} else {
		cout << "Эти числа равны" << endl;
	}
	return 0;
}
