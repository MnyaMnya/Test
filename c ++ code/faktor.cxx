#include <iostream>
using namespace std;
int main()
{
	line1:
	int i = 1,b = 0,a;
	cout << "Ketik nilai yang mau difaktorkan: ";
	cin >> a;
	while (i <= a)
	{
		if (a % i == 0)
		{
			cout << i << ", ";
			b ++;
		}
		i ++;
	}
	cout << endl << "Totalnya adalah: " << b << endl;
	goto line1;
}