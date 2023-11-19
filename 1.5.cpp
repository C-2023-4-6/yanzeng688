#include<iostream>
#include<iomanip>		
using namespace std;
int main(void)
{
	float f, c;
	cin >> f;
	c = 5.0 / 9 * (f - 32);
	cout << fixed << setprecision(2) << c << endl;	
	return 0;
}