#include <iostream>
using namespace std;
int fac(int a)
{
	int i = 1,b = 1;
	while (i <= a)
	{
		b = b * i;
	}
	return b;
}
int main()
{
	int a;
	a = fac(2);
}