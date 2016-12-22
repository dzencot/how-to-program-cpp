//урок 4.35(а)
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int number;
	int result = 1;
	cout << "Введите неотрицательное целое число: ";
	cin >> number;
	while ( number > 0 ) {
		result *= number;
		number--;
	}
	cout << "Факториал равен " << result << endl;
	return 0;
}
