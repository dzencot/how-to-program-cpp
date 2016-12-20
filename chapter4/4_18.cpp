//урок 4.18
#include <iostream>
using std::cout;
using std::endl;

int main() {
	int counter = 1;
	cout << "N\t10*N\t100*N\t1000*N" << endl << endl;
	while ( counter < 6 ) {
		cout << counter++ << "\t" << counter * 10 << "\t" << counter * 100 << "\t" << counter * 1000 << endl;
	}
	return 0;
}
