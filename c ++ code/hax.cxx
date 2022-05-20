#include <iostream>
using namespace std;

int cek(int x)
{
	if (x < 22)
	{
		return x;
	}
	else
	{
		return cek(x % 10) *
			   cek(x / 10) * 10;
	}
}
int main()
{
	for(int i=1;i<=1000000;i++){
	cout << "Pass(" << i << ") is: "
		<< cek(i) << endl;
	}
}