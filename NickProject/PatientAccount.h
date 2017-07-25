#pragma once
#include <string>
#ifndef Patient_H
#define Patient_H


class PatientAccount {
public:
	std::string first;
	std::string last;
	int days;
	int charge;
	
	static std::string GetFirst(int);
	static std::string GetLast(int);
	static int GetDays();
	

};



#endif