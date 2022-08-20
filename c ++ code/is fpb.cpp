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
    int num1,num2,result=0;
    cout << "Ketik Angka Ke-1: ";
    cin >> num1;
    cout << "Ketik Angka Ke-2: ";
    cin >> num2;
    for (int i=1;i<=10;i++){
         for (int j=1;j<=10;j++){
            if(FPB(i,j)==1){
                result++;
            }
         }

    }
    cout << result;
    cin >> result;
}