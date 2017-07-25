#include <iostream>
#include "SURGERY.H"
#include "PatientAccount.h"

using namespace std;


Surgery::Surgery(PatientAccount *Patient) {
	int num_sur = 0;
	cout << "How many surgeries does the patient need?" << endl;
	cin >> num_sur;
	for (int n = 0; n < num_sur; n++) {
		int temp_in;
		cout << "Enter the type of surgery for the patient" << endl;
		cout << "Types of Surgery" << endl;
		cout << "----------------" << endl;
		cout << "1 - Tonsillectomy\n2 - Foot\n3 - Knee\n4 - Shoulder\n5 - Appendectomy" << endl;
		cin >> temp_in;
		//check to make sure valid
		if ((temp_in == 1) || (temp_in == 2) || (temp_in == 3) || (temp_in == 4) || (temp_in == 5)) {
			getSurgery(temp_in);
		}
		else {
			cout << "Invalid Input. Please Enter a number between 1 and 5" << endl;
			n--;
		}
		addSurgeryCost(Patient);
	}

}
void Surgery:: getSurgery(int choice){
	switch (choice){
	case 1:
		SurgeryCost = 100;
		break;
	case 2:
		SurgeryCost = 200;
		break;
	case 3:
		SurgeryCost = 300;
		break;
	case 4:
		SurgeryCost = 400;
		break;
	case 5:
		SurgeryCost = 500;
		break;
	}
}
void Surgery:: addSurgeryCost(PatientAccount *Patient){
	Patient->charge += SurgeryCost;

}