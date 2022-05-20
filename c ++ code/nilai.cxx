#include <iostream>
using namespace std;
int nilai (float a, float b){
	return a / b * 100;
}
int main (){
	int x, y;
	line1:
	cout << "Ketik jumlah betul: ";
	cin >> x;
	cout << "Ketik jumlah soal: ";
	cin >> y;
	cout << "Jumlah nilai adalah: " << nilai(x, y) << endl;
	goto line1;
}