#include <iostream>
#include "PatientAccount.h"
using namespace std;

string PatientAccount::GetFirst(int i) {
	string first;

	//asks for names of patients
	cout << "Enter the first name for patient " << i + 1 << endl;
	cin >> first;
	return first;
}
string PatientAccount::GetLast(int i) {
	string last;
		cout << "Enter the last name for patient " << i + 1 << endl;
		cin >> last;
		return last;
	
}
int PatientAccount::GetDays() {
	int days;
	bool fail = false;
	do { 
		fail = false;
		cout << "Enter number of days stayed in the hospital" << endl;
		cin >> days;

		if (cin.fail()) {
			cout << "Invalid Input! Please enter an integer" << endl;
			cin.clear();
			cin.ignore(256, '\n');
		fail = true;
		}

			
		
	} while (fail);
	return days;
}
