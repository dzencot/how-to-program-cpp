//урок 4.35(б)
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int number;
	double result = 1;
	cout << "Введите нужную точность нахождения числа e: ";
	cin >> number;
	while ( number > 0 ) {
		double factorial = 1.0;
		int countFactorial = number;
		while ( countFactorial > 0 ) {
			factorial *= countFactorial;
			countFactorial--;
		}
		result += 1 / factorial;
		number--;
	}
	cout << "Число e равно " << result << endl;
	return 0;
}
