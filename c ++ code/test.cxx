#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main(){
	cout << "Gunakan + - / x % ^ untuk operasi mtk" << endl;
	string a;
	double b;
	line1:
	cin >> b;
	cout << "Jawabanya adalah: "<< b << endl;
	goto line1;}