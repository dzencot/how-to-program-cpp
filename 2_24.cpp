//урок 2.24
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int x;
	cout << "Введите число: ";
	cin >> x;
	if ( x % 2 == 0 ) {
		cout << "Это число четное";
	} else {
		cout << "Это число нечетное";
	}
	return 0;
}
