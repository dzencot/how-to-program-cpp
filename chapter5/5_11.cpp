//Урок 5.11
//Модифицируйте программу расчета сложных процентов из раздела 5.4, повторив
//вычисления для ставок 5%, 6%, 7%, 8%, 9% и 10%.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <cmath>
using std::pow;

int main() {
    double amount;
    double principal = 1000.0;
    cout << "Year" << setw(21) << "Amount on deposit" << endl;
    cout << fixed << setprecision(2);
    for ( int year = 1; year <= 10; year++ ) {
        cout << setw(4) << year << endl;
        for ( double rate = .05; rate <= 0.1; rate += .01 ) {
            amount = principal * pow( 1.0 + rate, year );
            cout << setw(21) << setprecision(0) << rate * 100 << "%: " << setprecision(2) << amount << endl;
        }
    }
}