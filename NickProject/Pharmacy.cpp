#include "Pharmacy.h"
#include <iostream>
#include "PatientAccount.h"

using namespace std;

Pharmacy::Pharmacy(int numPatient){
	int num_med = 0;
	cout << "How many Medications does the patient need?";
	cin >> num_med;
	for (int n = 0; n < num_med; n++) {
		int temp_in;
		cout << "Enter the type of medication for the patient:" << endl;
		cout << "Types of Medications" << endl;
		cout << "----------------" << endl;
		cout << "1 - Antibiotic\n2 - Ant - inausea\n3 - Anti - inflamatory\n4 - Light Pain\n5 - Strong Pain" << endl;
		cin >> temp_in;
		//check to make sure valid
		if ((temp_in == 1) || (temp_in == 2) || (temp_in == 3) || (temp_in == 4) || (temp_in == 5)) {
			getCost(temp_in, numPatient);
		}
		else {
			cout << "Invalid Input. Please Enter a number between 1 and 5" << endl;
			n--;
		}
		addCost(medicationCost, numPatient);
	}

}
void Pharmacy::getCost(int choice, int numPatient){
	switch (choice){
	case 1:
		medicationCost = 10;
		break;
	case 2:
		medicationCost = 20;
		break;
	case 3:
		medicationCost = 30;
		break;
	case 4:
		medicationCost = 40;
		break;
	case 5:
		medicationCost = 50;
		break;
	}
}
void Pharmacy::addCost(int medicationCost, int numPatient){
//	PatientAccount::Patients[numPatient].charge += medicationCost;
}
