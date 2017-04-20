#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person {
public:
	string Fname, MName, LName, Gender, Generation;
	int lengthF, lengthM, positionF, positionM;
	int FemNames[372];
	int MalNames[232];
	int getLengthF();
	int getLengthM();
	string getFName(string FName);
	string getLName(string LName);
	void ReadFileF(ifstream& in);
	void WriteFileF(ofstream& out);
	void ReadFileM(ifstream& in);
	void WriteFileM(ofstream& out);
	Person();
	~Person();

};