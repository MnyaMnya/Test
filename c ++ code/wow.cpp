#include <iostream>
using namespace std;
int gg(int x,int y){
    if (y==0)return 0;
    if (y%2>0)return gg(x*2,y/2)+x;
    return gg(x*2,y/2);
}
int main(){
    cout << gg(23,201);
    int i;
    cin >> i;
}