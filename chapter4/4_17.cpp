//урок 4.17
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int counter = 1;
	int largest = 0;
	int number;
	cout << "Введите число: ";
	cin >> largest;
	while ( counter < 10 ) {
		cout << "Введите число: ";
		cin >> number;
		if ( number > largest ) {
			largest = number;
		}
		++counter;
	}
	cout << "Наибольшее число: " << largest << endl;
	return 0;
}
