//урок 4.13
#include <iomanip>
using std::setprecision;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

int main() {
    int mile = 0, galon = 0;
    int currentmile = 0, currentgalon = 0;
    while ( currentmile != -1 ) {
        cout << "Введите пройденный путь (-1, если ввод закончен):";
        cin >> currentmile;
        if ( currentmile != -1 ) {
            cout << "Введите расход бензина: ";
            cin >> currentgalon;
            cout << "Миль/галлон для этой заправки: " << static_cast<double>(currentmile) / currentgalon << setprecision(6) << fixed << endl;
            mile += currentmile;
            galon += currentgalon;
            cout << "Суммарное значение миль/галлон: " << static_cast<double>(mile) / galon << setprecision(6) << fixed << endl;
        }
    }
    return 0;
}