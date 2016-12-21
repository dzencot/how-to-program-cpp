//урок 4.26
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int number;
	cout << "Введите пятизначное число: ";
	cin >> number;
	if ( number / 10000 % 10 == number % 10 and number / 1000 % 10 == number / 10 % 10) {
		cout << "Это число - палиндром" << endl;
	} else {
		cout << "Это число - не палиндром" << endl;
	}
	return 0;
}
