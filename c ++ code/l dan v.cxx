#include <iostream>
#include <time.h>
#include <math.h>
#include <string>
using namespace std;
void PS( unsigned int unNanosecondsIn )
{
clock_t wait_nanoseconds = (clock_t) unNanosecondsIn;
clock_t start_time = clock();
while( clock() != start_time + wait_nanoseconds );
return;
}
void test(){
	 string load;
	 load = "Loading";
	 cout << "\r" << load << flush;
	 PS (500000);
	 load = "Loading.";
	 cout << "\r" << load << flush;
	 PS (500000);
	 load = "Loading..";
	 cout << "\r" << load << flush;
	 PS (500000);
	 load = "Loading...";
	 cout << "\r" << load << flush;
	 PS (500000);
	 load = "Done!     ";
	 cout << "\r" << load << flush;
}
int main()
{
	string a, b;
	int c, d, e;
	cout << "Gunakan l untuk [l]uas v untuk [v]olume" << endl;
	cout << "Gunakan b untuk [b]alok t untuk [t]abung" << endl;
	PS (2000000);
	line1:
	cout << "Pilih gunakan rumus apa :";
	cin >> a;
	if (a == "v")
	{
		cout << "Pilih jenis bangun yang akan di cari: " << endl;
		cin >> b;
		if (b == "b")
		{
			cout << "Ketik nilai panjang sisi: " << endl;
			cin >> c;
			d = c * c * c;
		}
		if (b == "t")
		{
			cout << "Ketik nilai jari jari: " << endl;
			cin >> c;
			cout << "Ketik nilai tinggi tabung: " << endl;
			cin >> e;
			d = pow(c, 2) * e * 3.14;
			}		
	}
	int i;
	i = 1;
	while (i == 1)
	{
		test();
		i = 2;
	}
	cout << endl << "Jawabanya adalah: " << d << endl;
	goto line1;
}