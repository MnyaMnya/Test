#include <iostream>
using namespace std;
int main(){
	int i, j, k,x,u,e,counter=0;
	line1:
	cout << "Ketik nilai terkecil: ";
	cin >> j;
	cout << "Ketik nilai terbesar: ";
	cin >> i;
	cout << "Ketik nilai pembagi: ";
	cin >> k;
    cout << "Ketik nilai pembagi ke 2: ";
    cin >> u;
    cout << "Ketik nilai yang tidak bisa dibagi: ";
    cin>> e;
	cout << "Ketik nilai sisa: ";
	cin >> x;
	while(j <= i){
        if (j % e == x){

        }
		else if(j % k == x || j % u == x){
			counter++;
			cout << j << "(" << counter<< "), ";
		}
		else{

		}
        j++;
	}
	cout << endl<< "Totalnya adalah: " << counter << endl;
	goto line1;
}