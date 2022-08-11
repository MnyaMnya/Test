#include <iostream>
#include <string>
using namespace std;

int main(){
	int b,TEST=1,Tcount=1;
	b=1;
	
	int i=1;
	line1:
		if (Tcount<= 2019){
		if(TEST==1){
			cout <<endl << "Tadd"<<": ";
			for (int x=1;x<=b;x++){
				
				cout << i <<"("<<Tcount<<")" <<", ";
				
				Tcount++;
				i++;
				if(Tcount == 2019){
					cout << ">>";
				}
				if(Tcount == 2020){
					cout << "<<";
				}

				
			}
			TEST=2;

			b++;
			goto line1;
		}
		if(TEST==2){
			cout <<endl<< "Todd"<<": ";
			for (int x=1;x<=b;x++){
				cout << i <<", ";
				i++;
			}
			TEST=3;
			b++;
			goto line1;	
		}
		if(TEST==3){
			cout <<endl<< "Tucker"<<": ";
			for (int x=1;x<=b;x++){
				cout << i <<", ";
				i++;
				
			}
			TEST=1;
			b++;
			goto line1;
		}
		
	}
	int z;
	cin >>z;
}