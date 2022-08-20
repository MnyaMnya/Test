#include <iostream>
using namespace std;
int main(){
    int arah=4,b=1,counter=1;
    bool belok=true;
    while(counter<=2015){
    if (arah>4){
        arah=1;
    }
    if (arah<1){
        arah=4;
    }
    if(belok==true){
        for (int a=1;a<=b;a++){
            
            if (arah>4){
        arah=1;
    }
    if (arah<1){
        arah=4;
    }
        arah++;
        }
        belok=false;
    }
    if(belok==false){
        if (arah>4){
        arah=1;
    }
    if (arah<1){
        arah=4;
    }
        for (int a=1;a<=b;a++){
        arah--;
        }
        belok=true;
    }
    b++;
    
cout << arah;
cin >> arah;
}