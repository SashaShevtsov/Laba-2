#include <iostream>
#include <math.h>
using namespace std;
double myPi(double e)
{
	int n = 1;
	double sum = 1.;
	double fraction = 1/n;
	double pi = 4*sum;
	while (fabs(pi - acos(-1)) >= e)
	{
		fraction = (fraction*(-1)*n) / (n + 2);
		sum += fraction;
		pi = 4 * sum;
		n += 2;
	}
	return pi;
}


void main()
{
}

