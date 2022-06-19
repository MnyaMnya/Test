#include <iostream>
using namespace std;
int main(){
    int ref;
    int a[5];
    line1:
    for (int i=0;i<5;i++){
        cout << "Ketik Nomor Urut Ke " << i+1<<" : ";
        cin >> a[i];
    }
    for (int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            if(a[j]<a[i]){
                ref = a[i];
                a[i] = a[j];
                a[j] = ref;
            }
        }
    }
    cout <<"Urutanya adalah: ";
    cout << "{ ";
    for (int i=0;i<5;i++){
        cout << a[i]<<", ";
    }
    cout << "}" << endl;
    goto line1;
}