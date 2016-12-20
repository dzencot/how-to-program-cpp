//урок 4.16
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::showpoint;

#include <iomanip>
using std::setprecision;

int main() {
	while ( true ) {
		int hours;
		int sverhhours;
		double stavka;
		double zarplata;
		double sverh = 0;
		cout << "Введите число рабочих часов (-1, если ввод закончен): ";
		cin >> hours;
		if ( hours == -1 ) {
			return 0;
		}
		cout << "Введите почасовую ставку работника ($00.00): ";
		cin >> stavka;
		sverhhours = hours - 40;
		if ( sverhhours > 0 ) {
			sverh = sverhhours* stavka * 1.5;
			hours = hours - sverhhours;
		}
		zarplata = hours * stavka + sverh;
		cout << "Зарплата: $" << setprecision(2) << showpoint << fixed << zarplata << endl;
	}
}
