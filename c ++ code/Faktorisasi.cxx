#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long double z=0,x=1;
	line1:
	long double a,b=1,i=1,c,d=1,f,g=1;
	cout << "Ketik nilai yang akan di faktorisasi: ";
	cin >> a;
	while (i < a){
		i++;
		b = b * i;
	}
	i = 1;
	long double e = b;
	e = e / g;
	z= z + e;
	x = x * e;
	cout << "Jawabanya adalah : " << e << endl;
	cout << "Total jumlah jawaban adalah: "<< z << endl;
	cout << "Total kali jawaban adalah: " << x << endl;
	goto line1;
}