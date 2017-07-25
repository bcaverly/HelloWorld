#include <iostream>
#include <cctype>
#include <string>
#include "PatientAccount.h"
#include "Surgery.h"


using namespace std;

void menu(PatientAccount[], int);

void View(PatientAccount Patients[], int num);

int Search(PatientAccount Patients[], int num);

void Sort(PatientAccount Patients[], int num);

// main()
int main() {
	int num_patients;
	//ask for number of patients
	cout << "How many patients need to be inputted?" << endl;
	cin >> num_patients;
	
	//create array of patients
	PatientAccount *Patients = new PatientAccount[num_patients];
	//call Patient function
	for (int i = 0; i < num_patients; i++) {
		
		Patients[i].first = PatientAccount::GetFirst(i);
		Patients[i].last = PatientAccount::GetLast(i);
		Patients[i].charge += (500 * (PatientAccount::GetDays()));

		//call Surgery function
		Surgery::Surgery(&(Patients[i]));
		//Patients[i].charge += Surgery::Surgery();
		//call medication function
		//Pharmacy::Pharmacy(i, Patients);
	}
	//call menu function
	menu(Patients, num_patients);
	}

void menu(PatientAccount Patients[], int num) {
	char input;
	cout << "=====================================" << endl;
	cout << "Patient Fee Information Database Menu" << endl;
	cout << "=====================================" << endl;
	cout << "V - View Patient Fee Information Database\nF - Find Patient Fee Information by Patient Name"
		<< "\nS - Sort Patient Fee Information\nA - Add Patient Fee\nE - Export to file\nI - Inport from file\nQ - Quit the program " << endl;
	cin >> input;
	switch (toupper(input))
	{
	case 'V':
		View(Patients,num);
		break;
	case 'F':
		Search(Patients,num);
		break;
	case 'S':
		Sort(Patients, num);
		break;
	case 'A':
		break;
	case 'E':
		break;
	case 'I':
		break;
	case 'Q':
		break;
	default:
		break;
	}
}

void View(PatientAccount Patients[], int num) {
	for (int i = 0; i < num; i++) {
		cout << "Patient " << num + 1 << endl;
		cout << "First: " << Patients[i].first << endl;
		cout << "Last: " << Patients[i].last << endl;
		cout << "Charges: " << Patients[i].charge << endl;
		cout << "Days: " << Patients[i].days << endl;

	}

}

int Search(PatientAccount Patients[],int num) {
	int found;
	string in_name;
	cout << "Enter a last name to search" << endl;
	cin >> in_name;
	for (int i = 0; i < num; i++) {
		if (in_name.compare(Patients[i].last) == 0) {
			found = i;
		}
	}
	return found;
}

void Sort(PatientAccount Patients[], int num) {
	PatientAccount *Sorted = new PatientAccount[num];
	PatientAccount sorted = Patients[num];
	int temp;
	PatientAccount ph;
	for (int i =0; i< num; i++){
		
		temp = i;
		for (int j = 0; j < num + 1; j++) {
			if (Patients[temp].charge > Patients[j].charge) {
				temp = j;
			}
			ph = Patients[i];
			Patients[i] = Patients[j];
			Patients[j] = ph;

		}
		
	}
	
}
