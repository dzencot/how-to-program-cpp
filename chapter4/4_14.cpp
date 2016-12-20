//урок 4.14
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main() {
	int number = 0;
	double balance = 0;
	double cons = 0;
	double com = 0;
	double credit = 0;
	while ( number != -1 ) {
		cout << "Введите номер счета (-1, если ввод закончен): ";
		cin >> number;
		if ( number == -1 ) {
			return 0;
		}
		double newbalance;
		cout << "Введите начальный баланс: ";
		cin >> balance;
		cout << "Введите сумму расходов: ";
		cin >> cons;
		cout << "Введите сумму прихода: ";
		cin >> com;
		cout << "Введите предел кредита: ";
		cin >> credit;
		newbalance = balance + cons - com;
		cout << "Новый баланс: " << newbalance << setprecision(2) << fixed << endl;
		cout << "Счет: " << number << endl;
		cout << "Предел кредита: " << credit << setprecision(2) << fixed << endl;
		cout << "Баланс: " << newbalance << setprecision(2) << fixed << endl;
		if ( newbalance > credit ) {
			cout << "Предел кредита превышен" << endl;
		}
	}
	return 0;
}
