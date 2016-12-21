//урок 4.25
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int size;
	cout << "Введите сторону квадрата (1-20): ";
	cin >> size;
	if ( size >= 1 and size <= 20 ) {
		int row = 1;
		while ( row <= size ) {
			int column = 1;
			while ( column <= size ) {
				if ( row == 1 or row == size ) {
					cout << "*";
				} else {
					if ( column == 1 or column == size ) {
						cout << "*";
					} else {
						cout << " ";
					}
				}
				column++;
			}
			cout << endl;
			row++;
		}
	} else {
		cout << "Неверное значение" << endl;
	}
	return 0;
}
