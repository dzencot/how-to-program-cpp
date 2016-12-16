//урок 3.13
//тест класса Invoice
#include <iostream>
using std::cout;
using std::endl;

#include "invoice.h"

int main() {
	//создаем класс и тестируем:
	Invoice invoice1( "изделие1", "это изделие1", 100, 5 );
	cout << "Артикул изделия: " << invoice1.getArticul() << endl
			<< "Описание изделия: " << invoice1.getDesc() << endl
			<< "Количество отпускаемых единиц: " << invoice1.getQnty() << endl
			<< "Цена: " << invoice1.getPrice() << endl;
	cout << "Пытаемся установить отрицательное количество изделий" << endl;
	invoice1.setQnty( -10 );
	cout << "Артикул изделия: " << invoice1.getArticul() << endl
			<< "Описание изделия: " << invoice1.getDesc() << endl
			<< "Количество отпускаемых единиц: " << invoice1.getQnty() << endl
			<< "Цена: " << invoice1.getPrice() << endl;
	cout << "Пытаемся установить отрицательную цену" << endl;
	invoice1.setPrice( -10 );
	cout << "Артикул изделия: " << invoice1.getArticul() << endl
			<< "Описание изделия: " << invoice1.getDesc() << endl
			<< "Количество отпускаемых единиц: " << invoice1.getQnty() << endl
			<< "Цена: " << invoice1.getPrice() << endl;

	return 0;
}
