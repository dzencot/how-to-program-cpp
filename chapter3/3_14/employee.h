//урок 3.14
//интерфейс класса Employee
#include <string>
using std::string;

class Employee {
	public:
		Employee( string, string, int );
		void setName( string );
		void setLastName( string );
		void setSalary( int );
		string getName();
		string getLastName();
		int getSalary();
	private:
		string name;
		string lastname;
		int salary;
};
