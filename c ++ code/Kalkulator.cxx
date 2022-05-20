#include <iostream>
#include <string>
#include <time.h>
#include <math.h>
#include <stdlib.h>
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
	 PS (500);
	 load = "Loading.";
	 cout << "\r" << load << flush;
	 PS (500);
	 load = "Loading..";
	 cout << "\r" << load << flush;
	 PS (500);
	 load = "Loading...";
	 cout << "\r" << load << flush;
	 PS (500);
	 system("cls");
}
void six(){
    for(int i=1;i<600;i++){
cout << "666666666666666666666666666666";
    }
PS (3000);
system("cls");
cout << "Who Are You?";
PS (3000);
system("cls");
cout << "Why Are You Here?";
PS (3000);
system("cls");
cout << "Stop!";
for(int i=1;i<6000;i++){
cout << "!!!!!!!!!!!!!";
}
PS (3000);
system("cls");
terminate();
}
int main(){
	cout << "Gunakan + - / x % ^ untuk operasi mtk" << endl;
	long double a, d;
	cout << "Masukkan nomor: ";
	cin >> a;
	string b;
	line1:
	cout << "Masukkan operasi: ";
	cin >> b;
	long double c;
	cout << "Masukkan nomor: ";
	cin >> c;
	int i;
	i = 1;
	while (i == 1){
		i = 2;
	}
	if (b == "+"){
		d = a + c;
	}
	if (b == "-"){
		d = a - c;
	}
	if (b == "x"){
		d = a * c;
	}
	if (b == "/"){
		d = a / c;
	}
	if (b == "%"){
		d = fmod(a,c);
	}
		if (b == "^"){
		d = pow(a, c);
	}
	if (d == 69){
		cout << "nais 69 ;v"<< endl;
	}
	if (d == 666){
	    d = 0;
            system("cls");
            system("color 4e");
            six();
	}
	else{
            system("cls");
            test();
	cout << "Jawabanya adalah: " << d << endl;}
	a = d;
	goto line1;
}
