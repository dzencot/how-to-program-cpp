//урок 2.27
#include <iostream>

using std::cout;
using std::endl;

int main() {
	cout << "Символ:\tASCII:" << endl;
	cout << "A\t" << static_cast<int>( 'A' ) << endl;
	cout << "B\t" << static_cast<int>( 'B' ) << endl;
	cout << "C\t" << static_cast<int>( 'C' ) << endl;
	cout << "a\t" << static_cast<int>( 'a' ) << endl;
	cout << "b\t" << static_cast<int>( 'b' ) << endl;
	cout << "c\t" << static_cast<int>( 'c' ) << endl;
	cout << "0\t" << static_cast<int>( '0' ) << endl;
	cout << "1\t" << static_cast<int>( '1' ) << endl;
	cout << "2\t" << static_cast<int>( '2' ) << endl;
	cout << "3\t" << static_cast<int>( '3' ) << endl;
	cout << "$\t" << static_cast<int>( '$' ) << endl;
	cout << "*\t" << static_cast<int>( '*' ) << endl;
	cout << "+\t" << static_cast<int>( '+' ) << endl;
	cout << "\\\t" << static_cast<int>( '\\' ) << endl;
	cout << " \t" << static_cast<int>( ' ' ) << endl;
	return 0;
}
