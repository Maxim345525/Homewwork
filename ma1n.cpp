#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ukr");
	float R1 = 2, R2 = 4, R3 = 8;
	float R0;

	R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

	cout << "опора R0:" << R0 << endl;

	system("pause");

}