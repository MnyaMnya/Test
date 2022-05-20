#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int a,b; //a terkecil b terbesar
	int r,n; //r referensi n nilai
	string s;
	line1:
	cout << "Ketik nilai terkecil: ";
	cin >> a;
	cout << "Ketik nilai terbesar: ";
	cin >> b;
	while (a <= b){
	s = to_string(a);
	//cout << "nilai s =" << s << endl;
	r = s.size();
	//cout << "nilai r = " << r << endl;
	a++;
	n = n + r;
	}
	cout << "Jumlah digit nya adalah: " << n << endl;
	goto line1;
}