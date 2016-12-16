//урок 3.12
//реализация класса Account
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "account.h"

Account::Account( int value ) {
	setBalance( value );
}

void Account::setBalance( int value ) {
	if ( value < 0 ) {
		value = 0;
	}
	balance = value;
}

int Account::getBalance() {
	return balance;
}

void Account::credit( int value ) {
	if ( value < 0 ) {
		value = 0;
	}
	setBalance( getBalance() + value );
}

void Account::debit( int value ) {
	if ( value < 0 ) {
		value = 0;
	}
	if ( value > getBalance() ) {
		cout << "Запрошенная сумма превышает баланс счета" << endl;
	} else {
		setBalance( getBalance() - value );
	}
}
