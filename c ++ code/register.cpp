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
void quit(){
	 string load;
	 load = "Quitting";
	 cout << "\r" << load << flush;
	 sleep (1);
	 load = "Quitting.";
	 cout << "\r" << load << flush;
	 sleep (1);
	 load = "Quitting..";
	 cout << "\r" << load << flush;
	 sleep (1);
	 load = "Quitting...";
	 cout << "\r" << load << flush;
	 sleep (1);
	 terminate();
}
void six(){
system("cls");
cout << "Password anda salah";
sleep(1);
quit();
}

int main(){
	string user,pass,mypass,reg;
	string cpass;
	bool x;
	fstream txtsize("size.txt");
	string ssize,line;
	getline (txtsize, ssize);
	int size = stoi(ssize);
	fstream txtuser;
	txtuser.open("user.txt");
	string username[size+1];
	for(int i=0;i<size;i++)
	{
		getline (txtuser,line);
		username[i]=line;
	}
	line1:
	cout << "Apakah anda ingin register atau check akun atau melihat list[R/C/L]"<<endl;
	cout << "Ketik Input anda: ";
	cin >> reg;
	system("cls");
	if (reg =="C" || reg=="c")
	{
		cout << "Ketik Username anda: ";
		cin >> user;
		ifstream txt(user+".txt");
		cout << "Ketik Password anda: ";
		cin >> pass;
		getline (txt, mypass);
		if (pass != mypass)
		{
		system("cls");
        system("color 4e");
		six();
		}
		else {}
	}
	else if (reg =="R" || reg=="r")
	{
		cout << "Ketik Username anda: ";
		cin >> user;
		for(int i=0;i<size;i++)
		{
		if (user == username[i])
		{
			x=true;
		}
		else{}
		}
		if (x == true)
		{
			line2:
			cout << "User ini sudah register"<<endl<<"Apakah anda mau mengganti Password? [Y/N]"
			<<endl<<"Ketik input anda:";
			cin >> cpass;
			system("cls");
			if (cpass == "n" || cpass == "N")
			{
				cout << "Quitting.."<<endl;
				terminate();
			}
			else if (cpass == "y" || cpass == "Y")
			{

				fstream txt(user+".txt");
				cout << "Ketik Password anda: ";
				cin >> pass;
				getline (txt, mypass);
				if (pass != mypass)
				{
					system("cls");
       				system("color 4e");
					six();
				}
				else
				{
					txt.clear();
					txt.seekg(0);
					cout << "Ketik Password Baru anda: ";
					cin >> pass;
					txt <<pass;
				}
			}
			else
			{
				cout << "Input ini tidak bisa dipakai"<<endl;
				sleep(1);
				goto line2;
			}
			
		}
		else 
		{
			ofstream txt(user+".txt");
			cout << "Ketik Password anda: ";
			cin >> pass;
			txt << pass;
			size += 1;
			ofstream txtsizes("size.txt");
			txtsizes<<size;
			txtsizes.close();
			txtuser.close();
			username[size-1]= user;
			txtuser.open("user.txt");
			for(int i=0;i<size;i++)
			{
				txtuser<<username[i]<<endl;
			}
		}
	}
	else if (reg =="L" ||reg=="l")
	{
		cout << "list user yang diregistrasi:"<<"["<<size<<"]" <<endl;
		for(int i=0;i<size;i++)
		{
			cout << username[i]<<endl;
		}
		cin >> reg;
	}
	else {
		cout << "Input ini tidak bisa dipakai"<<endl;
		sleep(1);
		goto line1;
	}
	system("cls");
	cout << "Login Sukses "<<user<<"!"<< endl;
	system("cls");
	quit();
}