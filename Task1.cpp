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
void main()
{

}
