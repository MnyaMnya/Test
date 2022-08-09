#include <iostream>
using namespace std;
int cdigit(int i){
    int referensi,nilai=0,digit;
digit=0;
referensi = i;
while(referensi>0)
{
digit=referensi%10;
nilai=nilai+digit;
referensi=referensi/10;
}
return nilai;
}
int main(){
    for(int i=10000;i<=99999;i++){
        if(cdigit(i)==9){
            cout << i<<", ";
        }
    }
}