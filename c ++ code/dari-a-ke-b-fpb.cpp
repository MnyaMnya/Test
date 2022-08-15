#include <iostream>
using namespace std;
int FPB(int a, int b){
    int r = 0;
    while(b!=0){
    r = a % b;
    a = b;
    b = r;
    }
    return a;
}
int main(){
    int num1,num2,num3,result=0;
    cout << "Ketik Nilai Terkecil: ";
    cin >> num1;
    cout << "Ketik Nilai Terbesar: ";
    cin >> num2;
    cout << "Ketik Nilai Yang mau di bandingkan: ";
    cin >> num3;
    for (int i=num1;i<num2;i++){
        result = result + FPB(i,num3);
    }
    cout << "Hasilnya adalah: "<< result;
    cin >> num2;
}