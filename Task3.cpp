#include <iostream>
#include <math.h>
using namespace std;
int MyNumberofZeros(int n)
{
	int mynumberofzeros=0;
	for (int i = 0; i <= n; i++)
	{
		int i1 = i;
		while (i1 % 5 == 0)
		{
			mynumberofzeros++;
			i1 /= 5;
		}
	}
	return mynumberofzeros;
}

void main()
{
}