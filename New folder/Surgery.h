#ifndef SURGERY_H
#define SURGERY_H
#include "PatientAccount.h"
class Surgery
{
private:
	int SurgeryCost;
	
public:
	
	Surgery(PatientAccount*);

	void getSurgery(int);
	void addSurgeryCost(PatientAccount*);
};
#endif