#include <iostream>
#include <string>
using namespace std;

int main(){
	int b,TEST=1,Tcount=1;
	b=1;
	int x =1,y=2;
	int i=1;
	line1:
		if (Tcount<= 2022){
		if(TEST==1){
			cout <<endl << "Si A"<<": ";
			for (int i=1;i<=b;i++){
				
				cout << x <<"("<<Tcount<<")" <<", ";
				Tcount++;
                x+=2;
			}
			TEST=2;
			b++;

			goto line1;
		}
		else if(TEST==2){
			cout <<endl<< "Si B"<<": ";
            
			for (int i=1;i<=b;i++){
				cout << y <<"("<<Tcount<<")" <<", ";
                Tcount++;
                y+=2;
			}
			TEST=1;
			b++;
			goto line1;	
		}
        
		
	}
	int z;
	cin >>z;
}