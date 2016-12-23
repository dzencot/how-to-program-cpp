//урок 5.10
//Напишите программу нахождения факториалов целых чисел от 1 до 5
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    for ( int i = 1; i <= 5 ; i++ ) {
        int factorial = 1;
        int count = i;
        while ( count > 0 ) {
            factorial *= count;
            count--;
        }
        cout << i << "\t" << factorial << endl;
    }
    return 0;
}