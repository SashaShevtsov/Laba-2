#include <iostream>
#include <math.h>
using namespace std;
double FirstSinus(double x, double e)
{
	int n = 1;
	double sinus = 0.;
	double rightsin = sin(x);
	double summand = x;
	while (fabs(sinus - rightsin) >= e)
	{
		sinus += summand;
		n += 2;
		summand = (summand*(-1)*x*x) / (n*(n - 1));
	}
	return sinus;
}
void Test(double x, double e, double rightsin)
{
	double sinus = FirstSinus(x, e);
	if (fabs(sinus - rightsin) < e)
		cout << "OK" << endl;
	else
		cout << "False" << endl;
}
void main()
{
	Test(4, 0.05, sin(4));
	Test(7.3, 0.1, sin(7.3));
	Test(2, 0.6, sin(2));
	Test(1.1, 0.025, sin(1.1));
}
