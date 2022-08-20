#include <iostream>
using namespace std;
int batu(int a){
    int r=1;
    while(a%2==0){
     r= r*2;
        a  /=2;

    }
    return r;
}
int gunting(int a, int b){
    int r =0;
    if (a<=b){
        r=batu(a) + gunting(a+1,b);
    }
    return r;
}
int main(){
    cout << gunting(10,100);
    int a;
    cin >> a;
}