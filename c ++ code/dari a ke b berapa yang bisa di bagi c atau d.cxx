#include <iostream>
using namespace std;
int main(){
	int i, j, k, l, m;
	line1:
	cout << "Ketik nilai terkecil: ";
	cin >> j;
	cout << "Ketik nilai terbesar: ";
	cin >> i;
	cout << "Ketik nilai pembagi: ";
	cin >> k;
	cout << "Ketik nilai pembagi kedua: ";
	cin >> m;
	l = 0;
	while(i >= j){
		if(i % k == 0 || i % m == 0){
			l = l + 1;
		}
		else{
			l = l + 0;
		}
		i = i - 1;
	}
	cout << "Totalnya adalah: " << l << endl;
	goto line1;
}