//урок 5.14
//Торговый дом продает пять различных продуктов, розничная цена которых:
//продукт 1 - 2.98, 2 - 4.50, 3 - 9.98, 4 - 4.49, 5 - 6.87. Напишите программу,
//которая читает последовательность пар(номер продукта и кол-во проданных за
//день) и выводит общую розничную стоимость всех проданных продуктов за неделю.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    double result = 0;
    for ( int i = 0; i < 7; i++ ) {
        cout << "День " << i + 1 << endl;
        int number = 0;
        while ( number != -1 ) {
            int count = 0;
            double amount = 0;
            cout << "Введите номер продукта и кол-во проданного за день(-1 если закончили ввод):";
            cin >> number >> count;
            switch ( number ) {
            case 1 : amount = count * 2.98;
            case 2 : amount = count * 4.50;
            case 3 : amount = count * 9.98;
            case 4 : amount = count * 4.49;
            case 5 : amount = count * 6.87;
            }
            result += amount;
        }
    }
    cout << "Всего продано на сумму: " << result << endl;
    return 0;
}
