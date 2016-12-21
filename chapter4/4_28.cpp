//урок 4.27
#include <iostream>
using std::cout;
using std::endl;

int main() {
	int row = 1;
	while ( row <= 8 ) {
		int column = 1;
		while ( column <= 16 ) {
			if ( row % 2 ) {
				if ( column % 2 ) {
					cout << "*";
				} else {
					cout << " ";
				}
			} else {
				if ( column % 2 ) {
					cout << " ";
				} else {
					cout << "*";
				}
			}
			column++;
		}
		cout << endl;
		row++;
	}
	return 0;
}
