#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;


void quit(){
	 string load;
	 system("cls");
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
	 exit(1);
}

int main(){
    string file = "Siswa", other = "Nilai";
    string mapel[4]={"Fisika","Kimia","Biologi","Mtk"};
    if (CreateDirectoryA(file.c_str(), NULL) ||
    ERROR_ALREADY_EXISTS == GetLastError()){
	}
	else{
		cout <<"Error Failed to Create User Directory";
		sleep(2);
		quit();
	}
	if (CreateDirectoryA(other.c_str(), NULL) ||
    ERROR_ALREADY_EXISTS == GetLastError()){
	}
	else{
		cout <<"Error Failed to Create Other Directory";
		sleep(2);
		quit();
	}
    
 //   fstream newtext(fileLoc);
// for (int i=0;i<sizeof(arr)/sizeof(arr[0];i++)){}
}