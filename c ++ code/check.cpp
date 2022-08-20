#include <iostream>
using namespace std;
int func(int a,int b){
    if (a==0||b==0){
        return 0;
    }
    return (a*b)+func(a+2,b-2);
}
int main(){
    cout << func(1,100);
    int a;
    cin >> a;
}