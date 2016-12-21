//урок 4.34
//программа для дешифровки
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int number;
	cout << "Введите число, которое нужно расшифровать: ";
	cin >> number;
	number = 1000 * ( ( ( number / 10 % 10 ) + 3 ) % 10 ) + 100 * ( ( ( number % 10 ) + 3 ) % 10 ) + 10 * ( ( ( number / 1000 % 10 ) + 3 ) % 10 ) + ( ( ( number / 100 % 10 ) + 3 ) % 10 );
	cout << number << endl;
	return 0;
}
