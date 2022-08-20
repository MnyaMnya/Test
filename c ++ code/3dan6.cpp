#include <iostream>
using namespace std;
int main(){
    int x;
    bool found=false;
    cin >> x;
    line1:
    while(found==false){
        int ref=x,enam=0,tiga=0,dig;
        while (ref>0){
        dig = ref % 10;
        ref=ref/10;
        if(dig == 3){
            tiga++;
        }
        else if(dig == 6){
            enam++;
        }
        else{
            x++;
            goto line1;
        }
        }
        if(enam==tiga){
            found = true;
            cout << x;
        }
        x++;
    }
}