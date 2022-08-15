#include <iostream>
using namespace std;
int main(){
    int a,b,c,time;
    cout << "Ketik Nilai Bakteri yang Bisa bertambah: ";
    cin >> a;
    cout << "Ketik Nilai Bakteri yang tidak Bisa bertambah: ";
    cin >> b;
    cout << "Ketik brp kali membelahnya: ";
    cin >> time;
    for(int i=1;i<=time;i++){
        b=b+a;
        a=a+b;
        cout << "Nilai a saat ("<<i<< ")ini adalah: "<<a<<endl;
        cout << "Nilai b saat ("<<i<< ") adalah: "<<b<<endl;
    }
    cout << "Nilai a adalah: "<<a<<endl;
    cout << "Nilai b adalah: "<<b<<endl;
    cout <<"Jawabanya adalah: "<< a+b;
    cin >> a;
}