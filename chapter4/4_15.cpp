//урок 4.15
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::showpoint;

#include <iomanip>
using std::setprecision;

int main() {
	while (true) {
		double value = 0;
		cout << "Введите объем продаж в долларах (-1, если ввод закончен): ";
		cin >> value;
		if ( value == -1 ) {
			return 0;
		}
		cout << "Зароботок: $" << setprecision(2) << fixed << showpoint << 200 + ( value / 100 ) * 9 << endl;
	}
}
