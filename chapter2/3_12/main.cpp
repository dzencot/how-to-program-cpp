#include <iostream>
using std::cout;
using std::endl;
#include "account.h"

int main() {
	Account account1( 100 );
	cout << "Баланс равен " << account1.getBalance() << endl;	
	cout << "Вычитаем 50" << endl;
	account1.debit( 50 );
	cout << "Баланс равен " << account1.getBalance() << endl;
	cout << "Пытаемся вычесть 100: " << endl;
	account1.debit( 100 );
	cout << "Прибавляем 100" << endl;
	account1.credit( 100 );
	cout << "Баланс равен " << account1.getBalance() << endl;
}
