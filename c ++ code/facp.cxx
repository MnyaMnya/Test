#include <iostream>
using namespace std;
bool prime(int a)
{
	int i,m,f = 0;
	i = 2;
	m = a / 2;
	if (a == 1)
	{
		return false;
	}
	while (i <= m)
	{
		if (a % i == 0)
		{
			f = 1;
		}
		i++;
	}
	if (f == 0)
	{
		return true;
	}
}
int main()
{
	line1:
	int x,y,z=0,i = 0;
	cout << "Ketik nilai awal: ";
	cin >> x;
	cout << "Ketik nilai akhir: ";
	cin >> y;
	while (x <= y )
	{
		if (prime(x) == true)
		{
			z++;
			i = i + x;
			cout << x << ", ";
		}
		x++;
	}
	cout << endl << "Totalnya adalah: " << z <<endl;
	cout << "Jumlah nilai nya adalah: " << i << endl;
	goto line1;
}