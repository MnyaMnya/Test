#include <iostream>
#include <string.h>
using namespace std;
int main(){
	line1:
	int a,b,ref;
	string bin="";
	cout << "Ketik nilai yang mau di biner kan:";
	cin >> a;
	/*cout << "Biner basis brp: ";
	cin >> b;
	*/
b=2;
	while (a >= 1){
			ref = a;
			a= a/b;
			if (ref % b != 0){
					bin =  "1"+ bin;
				}
				else{
					bin = "0"+ bin;
				}
	}
		cout << "Jawabanya adalah: "<<bin<<endl;
		goto line1;
}