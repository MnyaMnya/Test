#include <iostream>
using namespace std;
int main()
{
	int pembagi,i,x[9];
	for (int i=1;i<10;i++){
		pembagi=i;
		x[i]=10/i;
	}
	for (int i=1;i<10;i++)
	{
		x[9]=x[9]+x[i];
	}
	cout << x[9];
}