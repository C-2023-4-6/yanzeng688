#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a, xn, xn1;
	cout << "xn=sqrt(a)\nPlease enter a number : \na = ";
	cin >> a;
	xn = 68;
	xn1 = (xn + a / xn) / 2;
	if (a < 0)
		cout << "a is a wrong date !" << endl;
	else
	{
		do
		{
			xn = xn1;
			xn1 = (xn + a / xn) / 2;
		} while (fabs(xn - xn1) >= 0.00001);
		cout << "xn  = " << fixed << setprecision(5) << xn << endl;
	}

	return 0;
}