#include <iostream>
#include <fstream>
#include "Person.h"
#include <string>
#include <stdlib.h>
using namespace std;

//Get length of FemNames array
int Person::getLengthF() {
	lengthF = sizeof(FemNames) / sizeof(int);
	return this->lengthF;
}

//Get length of MalNames array
int Person::getLengthM() {
	lengthM = sizeof(MalNames) / sizeof(int);
	return this->lengthM;
}

//Read FemaleNames.txt into FemNames array
void Person::ReadFileF(ifstream& in) {
	in.open("FemaleNames.txt");

	positionF = 0;
	cout << "Reading from FemaleNames.txt" << endl;
	while (!in.eof()) {
		//&&position<length

		in >> FemNames[positionF++];
		//position++;

	}

	in.close();
	for (int i = 0; i<lengthF; ++i)
	{

		cout << FemNames[i] << endl;
	}

}

//Read MaleNames.txt into MalNames array
void Person::ReadFileM(ifstream& in) {
	in.open("MaleNames.txt");

	positionM = 0;
	cout << "Reading from MaleNames.txt" << endl;
	while (!in.eof()) {
		//&&position<length

		in >> MalNames[positionM++];
		//position++;

	}

	in.close();
	for (int i = 0; i<lengthM; ++i)
	{

		cout << MalNames[i] << endl;
	}

}

string Person::getFName(string FName) {

}