//урок 5.18
//Напишите программу, которая печатает таблицу двоичных, восьмиричных
//и шестандцатиричных чисел в диапазоне от 1 до 256
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;

int main() {
    for ( int i = 1; i <= 256; i++ ) {
        cout << i << endl;
        int count = i;
        cout << "2x: ";
        while ( count >= 2 ) {
            int number = count % 2;
            cout << number;
            count = count / 2;
        }
        cout << count << endl;
        for ( int j = 8; j <= 16; j += 8 ) {
            cout << j << "x: ";
            count = i;
            while ( count >= j ) {
                int number = count % j;
                cout << number;
                count = count / j;
            }
            cout << count << endl;
        }
        cout << endl;
    }
    return 0;
}