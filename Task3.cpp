#include <iostream>
#include <math.h>
using namespace std;
int MyNumberofZeros(int n)
{
	int mynumberofzeros=0;
	for (int i = 1; i <= n; i++)
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
void Test(int n, int numberofzeros)
{
	if (MyNumberofZeros(n) == numberofzeros)
		cout << "OK" << endl;
	else
		cout << "False" << endl;
}
void main()
{
	Test(4, 0);
	Test(10, 2);
	Test(25, 6);
	Test(100, 24);
}