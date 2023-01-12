#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	double v, S, a, t;
	cout << "Введіть швидкість(v): ";
	cout << "Введіть час(t): ";
	cout << "Введіть прискорення(a): ";
	cin >> S;
	S = 2 * 13 + (32 * 13 * 13) / 2;
	cout << "Пройдена відстань = " << S << "" << endl;
	return 0;
}