#include <iostream>
#include <string>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <cwchar>
#include <windows.h>
using namespace std;
void PS( unsigned int Nanoseconds )
{
clock_t wait_nanoseconds = (clock_t) Nanoseconds;
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
CONSOLE_FONT_INFOEX cfi;
cfi.cbSize = sizeof(cfi);
cfi.nFont = 0;
cfi.dwFontSize.X = 0;                   // Width of each character in the font
cfi.dwFontSize.Y = 24;                  // Height
cfi.FontFamily = FF_DONTCARE;
cfi.FontWeight = FW_NORMAL;
std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

cout << "Stop!!!!!";
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
		line2:
    PS(100);
    system("color 1e");
    PS1300);
    system("color 2e");
    PS(100);
    system("color 3e");PS(100);
    system("color 4e");PS(100);
    system("color 5e");PS(100);
    system("color 6e");PS(100);
    system("color 7e");PS(100);
    system("color 8e");PS(100);
    system("color 9e");PS(100);
    system("color ae");PS(100);
    system("color be");PS(100);
    system("color ce");PS(100);
    system("color de");
    PS(100);
    system("color ee");
    PS(100);
    system("color fe");
    goto line2;
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
