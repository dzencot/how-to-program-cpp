//урок 5.12
//напишите программу, которая печатает треугольники
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
	for ( int i = 1; i <= 10; i++ ) {
		int j = 1;
		while ( j <= i ) {
			cout << '*';
			j++;
		}
		cout << endl;
	}
	cout << endl;
	for ( int i = 10; i >= 1; i-- ) {
		int j = 1;
		while ( j <= i ) {
			cout << '*';
			j++;
		}
		cout << endl;
	}
	cout << endl;
	for ( int i = 1; i <= 10; i++ ) {
		int j = 1;
		while ( j <= 10 ) {
			if ( j < i ) {
				cout << ' ';
			} else {
				cout << '*';
			}
			j++;
		}	
		cout << endl;
	}
	cout << endl;
	for ( int i = 10; i >= 1; i-- ) {
		int j = 1;
		while ( j <= 10 ) {
			if ( j < i ) {
				cout << ' ';
			} else {
				cout << '*';
			}
			j++;
		}
		cout << endl;
	}
	cout << endl;
	for ( int i = 1; i <= 10; i++ ) {
		for ( int j = 1; j <= i; j++ ) {
			cout << '*';
		}
		cout << ' ';
		for ( int j = 10 - i; j > 0; j-- ) {
				cout << ' ';
		}	
		for ( int j = 11; j > i; j-- ) {
		   	cout << '*';
		}	
		cout << ' ';
		for ( int j = ( i - 1 ) * 2; j > 0; j-- ) {
			cout << ' ';
		}
		for ( int j = 11; j > i; j-- ) {
		   	cout << '*';
		}	
		cout << ' ';
		for ( int j = 10 - i; j > 0; j-- ) {
			cout << ' ';
		}
		for ( int j = i; j > 0; j-- ) {
			cout << '*';
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
