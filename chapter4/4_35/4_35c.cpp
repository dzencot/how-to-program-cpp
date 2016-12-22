//урок 4.35(в)
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int number;
	int stepen;
	double result = 1;
	cout << "Введите число x: ";
	cin >> stepen;
	cout << "Введите нужную точность нахождения числа e^x: ";
	cin >> number;
	while ( number > 0 ) {
		double factorial = 1.0;
		int countFactorial = number;
		int resultStepen = 1;
		while ( countFactorial > 0 ) {
			resultStepen *= stepen;
			factorial *= countFactorial;
			countFactorial--;
		}
		result += resultStepen / factorial;
		number--;
	}
	cout << "Число e^x равно " << result << endl;
	return 0;
}
