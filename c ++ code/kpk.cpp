#include <iostream>
int FPB(int a, int b){
    using namespace std;
    int r = 0;
    while(b!=0){
    r = a % b;
    a = b;
    b = r;
    }
    return a;
}
int main(){
    int num1,num2,result;
    using namespace std;
    cout << "Ketik Nomor Ke 1: ";
    cin >> num1;
    cout << "Ketik Nomor Ke 2: ";
    cin >> num2;
    result = (num1 * num2) / FPB(num1,num2);
    cout << "KPK Nya adalah: "<< result;
    cin >> num1;
}