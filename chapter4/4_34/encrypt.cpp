//урок 4.35
//напишите программу, которая будет зашифровывать четырехзначное число по принципу:
//заменять каждую цифру значением (сумма этой цифры и 7) по модулю 10, затем поменять местами первую цифру с третьей и вторую с четвертой
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int number;
	cout << "Введите число, которое нужно зашифровать: ";
	cin >> number;
	int result;
	int counter = 1;
	int degr = 1;
	while ( counter <= 4 ) {
		result += ( ( number / degr % 10 + 7 ) % 10 ) * degr;
		counter++;
		degr *= 10;
	}
	cout << result / 10 % 10 << result % 10 << result / 1000 % 10 << result / 100 % 10 << endl;
	return 0;
}
