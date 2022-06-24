#include <iostream>
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

int main(){
	string user,pass,mypass,reg;
	fstream txtsize("size.txt");
	string ssize,line;
	getline (txtsize, ssize);
	int size = stoi(ssize);
	fstream txtuser("user.txt");
	string username[size+1];
		for(int i=0;i<size;i++){
			getline (txtuser,line);
			username[i]=line;
		}
	cout << "Apakah anda ingin register atau check akun atau melihat list[R/C/L]"<<endl;
	cout << "Ketik Input anda: ";
	cin >> reg;
	system("cls");
	if (reg =="C" || reg=="c"){
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
	if (reg =="R" || reg=="r"){
		cout << "Ketik Username anda: ";
		cin >> user;
		ofstream txt(user+".txt");
		cout << "Ketik Password anda: ";
		cin >> pass;
		txt << pass;
		for(int i=0;i<size;i++){
			if (user == username[i]){
				cout << "User ini sudah register"<<endl;
				terminate();
			}
		}
		size += 1;
		ofstream txtsizes("size.txt");
		txtsizes<<size;
		username[size-1]= user;
		for(int i=0;i<size;i++){
			txtuser<<username[i];
		}
	}
	if (reg =="L" || reg=="l"){
		cout << "list user yang diregistrasi:"<<"["<<size<<"]" <<endl;
		for(int i=0;i<size;i++){
			cout << username[i]<<endl;
		}
		cin >> reg;
	}
	system("cls");
	cout << "Login Sebagai:"<<user<<endl;
	test();
}