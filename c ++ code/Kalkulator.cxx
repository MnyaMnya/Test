#include <iostream>
#include <string>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <cwchar>
#include <windows.h>
#include <fstream>
#include <unistd.h>
using namespace std;
void test(){
	 string load;
	 load = "Loading";
	 cout << "\r" << load << flush;
	 sleep (1);
	 load = "Loading.";
	 cout << "\r" << load << flush;
	 sleep (1);
	 load = "Loading..";
	 cout << "\r" << load << flush;
	 sleep (1);
	 load = "Loading...";
	 cout << "\r" << load << flush;
	 sleep (1);
	 system("cls");
}
void six(){
    for(int i=1;i<600;i++){
cout << "666666666666666666666666666666";
    }
sleep (3);
system("cls");
cout << "Who Are You?";
sleep (3);
system("cls");
cout << "Why Are You Here?";
sleep (3);
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
sleep (3000);
system("cls");
terminate();
}
void login(){
	string user,pass,mypass,reg;
	cout << "Apakah anda sudah register? [Y/N]"<<endl;
	cout << "Ketik Input anda: ";
	cin >> reg;
	system("cls");
	if (reg =="Y" || reg=="y"){
		cout << "Ketik Username anda: ";
		cin >> user;
		ifstream txt(user+".txt");
		cout << "Ketik Password anda: ";
		cin >> pass;
		getline (txt, mypass);
		if (pass != mypass){
		system("cls");
        system("color 4e");
		six();
	}
	}
	if (reg =="N" || reg=="n"){
		cout << "Mohon Maaf anda harus register terlebih dahulu"<<endl;
		sleep(1);
		terminate();
	}
	system("cls");
	cout << "Login Sebagai:"<<user<<endl;
	test();
	system("cls");
}
int main(){
	login();
	
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
    sleep(1);
    system("color 1e");
    sleep(1);
    system("color 2e");
    sleep(1);
    system("color 3e");sleep(1);
    system("color 4e");sleep(1);
    system("color 5e");sleep(1);
    system("color 6e");sleep(1);
    system("color 7e");sleep(1);
    system("color 8e");sleep(1);
    system("color 9e");sleep(1);
    system("color ae");sleep(1);
    system("color be");sleep(1);
    system("color ce");sleep(1);
    system("color de");
    sleep(1);
    system("color ee");
    sleep(1);
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
