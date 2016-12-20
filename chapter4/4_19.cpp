//урок 4.19
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int counter = 1;
	int largest1 = 0;
	int largest2 = 0;
	int number;
	cout << "Введите число: ";
	cin >> largest1;
	while ( counter < 10 ) {
		cout << "Введите число: ";
		cin >> number;
		if ( number > largest1 ) {
			if ( number > largest2 ) {
				largest1 = largest2;
				largest2 = number;
			} else {
				largest1 = number;
			}
		}
		++counter;
	}
	cout << "Наибольшие 2 числа: " << largest1 << " и " << largest2 << endl;
	return 0;
}
