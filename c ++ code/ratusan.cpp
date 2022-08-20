#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int r;
    for (int a=1;a<=9;a++){
        for (int b=0;b<=9;b++){
            for (int c=0;c<=9;c++){
                if(pow(a,2)+pow(b,2)+pow(c,2)%26==0){
                    r++;
                }
            }
        }
    }
    cout <<r;
    cin >>r;
}