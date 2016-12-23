//урок 5.8
//Напишите программу, которая находит наименьшее из нескольких целых.
//Полагайте, что первое прочитанное число задает количество последующих
//вводимых чисел.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int count;
    int result;
    cin >> count >> result;
    for ( int i = 1; i < count; i++ ) {
        int number;
        cin >> number;
        if ( number < result ) {
            result = number;
        }
    }
    cout << "Наименьшее: " << result << endl;
    return 0;
}