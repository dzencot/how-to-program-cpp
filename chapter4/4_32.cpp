//урок 4.32
//Напишите программу, которая читает три ненулевых значения типа double, определяет и печатает, могут ли они представлять стороны треугольника.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	double a, b, c;
	cout << "Введите три значения: ";
	cin >> a >> b >> c;
	if ( a < b + c and b < a + c and c < a + b ) {
		cout << "Значения могут представлять стороны треугольника" << endl;
	} else {
		cout << "Значения не могут быть сторонами треугольника" << endl;
	}
	return 0;
}