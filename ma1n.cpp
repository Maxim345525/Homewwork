#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	double R, S;
	cout << "������ ����� ����: ";
	cin >> R;
	S = 3.14 * R * R;
	cout << "����� ���� = " << S << "" << endl;
	return 0;
}
