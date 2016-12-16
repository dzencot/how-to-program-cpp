//урок 3.14
//тест класса Employee
#include <iostream>
using std::cout;
using std::endl;

#include "employee.h"

int main() {
	Employee employee1( "Иван", "Иванов", 13000 );
	Employee employee2( "Петр", "Петров", 25000 );
	cout << "Годовая зарплата:" << endl;
	cout << employee1.getName() << " " << employee1.getLastName() << " " << employee1.getSalary() * 12 << endl;
	cout << employee2.getName() << " " << employee2.getLastName() << " " << employee2.getSalary() * 12 << endl;
	employee1.setSalary( employee1.getSalary() + employee1.getSalary() / 10 );
	employee2.setSalary( employee2.getSalary() + employee2.getSalary() / 10 );
	cout << employee1.getName() << " " << employee1.getLastName() << " " << employee1.getSalary() * 12 << endl;
	cout << employee2.getName() << " " << employee2.getLastName() << " " << employee2.getSalary() * 12 << endl;
}
