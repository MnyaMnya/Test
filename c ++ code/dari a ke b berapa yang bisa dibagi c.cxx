#include <iostream>
using namespace std;
int main(){
	int i, j, k, l,x;
	line1:
	cout << "Ketik nilai terkecil: ";
	cin >> j;
	cout << "Ketik nilai terbesar: ";
	cin >> i;
	cout << "Ketik nilai pembagi: ";
	cin >> k;
	cout << "Ketik nilai sisa: ";
	cin >> x;
	l = 0;
	while(j <= i){
		if(j % k == x){
			cout << j << ", ";
			l = l + 1;
		}
		else{
			l = l + 0;
		}
		j++;
	}
	cout << endl<< "Totalnya adalah: " << l << endl;
	goto line1;
}