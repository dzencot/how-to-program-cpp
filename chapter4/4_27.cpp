//урок 4.27
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int bitnumber;
	int result = 0;
	cout << "Введите двоичное число(не более 8 бит): ";
	cin >> bitnumber;
	int counter = 1;
	int digit = 1;
	int iter = 1;
	while ( counter <= 8 ) {
		cout << bitnumber / digit % 10 << "*" << iter << endl;
		result += bitnumber / digit % 10 * iter;
		counter++;
		digit *= 10;
		iter *= 2;
	}
	cout << "Результат: " << result << endl;
	return 0;
}
