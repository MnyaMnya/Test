#include <iostream>
using namespace std;
int main(){
    int ref;
    int n;
    line1:
    cout << "Ketik Jumlah Bilangan yang mau di urutkan: ";
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++){
        cout << "Ketik Nomor Urut Ke " << i+1<<" : ";
        cin >> a[i];
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                ref = a[i];
                a[i] = a[j];
                a[j] = ref;
            }
        }
    }
    cout <<"Urutanya adalah: ";
    cout << "{";
    for (int i=0;i<n-1;i++){
        cout << a[i]<<", ";
    }
    cout << a[n-1];
    cout << "}" << endl;
    goto line1;
}