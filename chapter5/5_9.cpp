//урок 5.9
//Напишите программу, которая считает и печатает произведение нечетных целых
//от 1 до 15.
#include <iostream>
using std::cout;

int main() {
    int result = 1;
    for ( int i = 1; i <= 15; i = i + 2 ) {
        result *= i;
    }
    cout << result;
    return 0;
}