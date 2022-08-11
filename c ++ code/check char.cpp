#include <iostream>
#include <string.h>
using namespace std;
int main(){
int counter=0;
char txt[5000],checker;
cout << "Ketik Textnya: ";
cin >> txt;
cout << "Ketik Huruf yang mau dicari: ";
cin >> checker;
int len = strlen(txt);
for (int i=0;i<len;i++){
    if(txt[i]==checker){
        counter++;
    }
}
cout << "Jumlah Huruf ["<<checker<<"] Yang ada di textnya ada ("<<counter<<")";
cin >> txt;
}
