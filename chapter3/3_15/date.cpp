//урок 3.15
//реализация класса Date
#include <iostream>
using std::cout;
using std::endl;

#include "date.h"

Date::Date( int _day, int _month, int _year ) {
	setDay( _day );
	setMonth( _month );
	setYear( _year );
}

void Date::setDay( int _day ) {
	day = _day;
}

void Date::setMonth( int _month ) {
	if ( _month < 1 or _month > 12 ) { _month = 1; }
	month = _month;
}

void Date::setYear( int _year ) {
	year = _year;
}

int Date::getDay() {
	return day;
}

int Date::getMonth() {
	return month;
}

int Date::getYear() {
	return year;
}

void Date::displayDate() {
	cout << getMonth() << "/" << getDay() << "/" << getYear();
}
