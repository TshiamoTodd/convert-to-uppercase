// wandies work.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	const int MAXCHAR = 81;
	char inputArry[MAXCHAR];

	cout << "Enter a string: \n";
	cin.getline(inputArry, MAXCHAR, '\n');

	for (int i = 0; i < strlen(inputArry); i++)
	{
		cout << inputArry[i] << endl;
	}

	system("pause");
	return 0;
}

int totOfCharacters(string val) {
	int totValue = val.length();
	return totValue;
}

void delChar(string val, int numOfChar, int pos) {
	val.erase(pos, numOfChar);
}

string reversedStr(string val) {
	val.c_str();
	char temp;
	int i, j;
	j = strlen(val.c_str) - 1;

	for (int i = 0; i <j;i++, j--)
	{
		temp = val.c_str()[i];
		val.c_str()[i] = val.c_str()[j]


	}


}
