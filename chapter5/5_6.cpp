//урок 5.6
//Напишите программу, которая подсчитывает и печатает среднее значение
//нескольких чисел. Считайте, что последняя вводимая величина является
//контрольным значением 9999. Типичная входная последовательность может иметь
//вид:
//10 8 11 77 9 9999
//Должно быть посчитано среднее значение чисел, предшествующих 9999.
#include <iostream>
using std::cout;
using std::cin;

int main() {
    double amount = 0.0;
    int count = 0;
    int number = 0;
    while ( true ) {
        cin >> number;
        if ( number == 9999 ) {
            break;
        }
        amount += number;
        count++;
    }
    cout << amount / count;
    return 0;
}