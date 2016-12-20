#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "analysis.h"

void Analysis::processExamResults() {
	int passes = 0;
	int failures = 0;
	int studentCounter = 1;
	int result;

	while ( studentCounter <= 10 ) {
		cout << "Enter result (1 = pass, 2 = fail): ";
		cin >> result;

		while ( result != 1 and result != 2 ) {
			cout << "Incorrect! Please try again (1 = pass, 2 = fail): ";
			cin >> result;
		}

		if ( result == 1 )
			passes = passes + 1;
		else
			failures = failures + 1;

		studentCounter = studentCounter + 1;
	}

	cout << "Passed " << passes << "\nFailed " << failures << endl;

	if ( passes > 8 )
		cout << "Raise tuition " << endl;
}
