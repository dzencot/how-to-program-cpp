//урок 3.14
//реализация класса Employee
#include "employee.h"

Employee::Employee( string _name, string _lastname, int _salary ) {
	setName( _name );
	setLastName( _lastname );
	setSalary( _salary );
}

void Employee::setName( string _name ) {
	name = _name;
}

void Employee::setLastName( string _lastname ) {
	lastname = _lastname;
}

void Employee::setSalary( int _salary ) {
	if ( _salary < 0 ) { _salary = 0; }
	salary = _salary;
}

string Employee::getName() {
	return name;
}

string Employee::getLastName() {
	return lastname;
}

int Employee::getSalary() {
	return salary;
}
