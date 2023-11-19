#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "Please enter an equation : " << endl;
	cin >> a;
	cin >> c;
	cin >> b;
	switch (c)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '%': cout << a << " % " << b << " = " << a % b << endl; break;
	case '/': {
		if (b == 0)
			cout << "It's a wrong divisor ." << endl;
		else
			cout << a << " / " << b << " = " << a / b << endl; break; }
	default: cout << "Please enter a right equation ." << endl; break;
	}

	return 0;
}