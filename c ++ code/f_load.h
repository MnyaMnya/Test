#include <iostream>
#include <unistd.h>
void test(){
    using namespace std;
	 string load;
	 system("cls");
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
	using namespace std;
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