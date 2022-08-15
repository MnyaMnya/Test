#include <iostream>
using namespace std;
int main(){
	int i, j, k, l,x,u,counter=0;
	line1:
	cout << "Ketik nilai terkecil: ";
	cin >> j;
	cout << "Ketik nilai Batas: ";
	cin >> i;
	cout << "Ketik nilai pembagi: ";
	cin >> k;
    cout << "Ketik nilai pembagi ke 2: ";
    cin >> u;
	cout << "Ketik nilai sisa: ";
	cin >> x;
	l = 0;
	while(counter < i){
		if(j % k == x || j % u == x){

		}
		else{
			counter++;
			cout << j << "(" << counter<< "), ";
		}
        j++;
	}
	cout << endl<< "Totalnya adalah: " << counter << endl;
	goto line1;
}