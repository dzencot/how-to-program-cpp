//Урок 5.13
//Напишите программу, которая читает 5 чисел(от 1 до 30) и рисует диаграмму
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int i1, i2, i3, i4, i5;
	cout << "Введите пять чисел от 1 до 30: ";
	cin >> i1 >> i2 >> i3 >> i4 >> i5;
	if ( i1 < 1 ) i1 = 1;
	if ( i1 > 30 ) i1 = 30;
	if ( i2 < 1 ) i2 = 1;
	if ( i2 > 30 ) i2 = 30;
	if ( i3 < 1 ) i3 = 1;
	if ( i3 > 30 ) i3 = 30;
	if ( i4 < 1 ) i4 = 1;
	if ( i4 > 30 ) i4 = 30;
	if ( i5 < 1 ) i5 = 1;
	if ( i5 > 30 ) i5 = 30;

	for ( int i = 0; i < i1; i++ ) {
		cout << '*';
	}

	cout << endl;

	for ( int i = 0; i < i2; i++ ) {
		cout << '*';
	} 

	cout << endl;

	for ( int i = 0; i < i3; i++ ) {
		cout << '*';
	}

	cout << endl;

	for ( int i = 0; i < i4; i++ ) {
		cout << '*';
	}

	cout << endl;

	for ( int i = 0; i < i5; i++ ) {
		cout << '*';
	}

	cout << endl;
	return 0;
}
