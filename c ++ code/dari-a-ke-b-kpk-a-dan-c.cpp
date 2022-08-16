#include <iostream>
int FPB(int a, int b){
    using namespace std;
    int r = 0;
    while(b!=0){
    r = a % b;
    a = b;
    b = r;
    }
    return a;
}
int KPK(int num1,int num2){
    int result;
    using namespace std;
    result = (num1 * num2) / FPB(num1,num2);
    return result;
}
int main(){
    using namespace std;
    int nmin,nmax,div,num2,counter=0;
    cout << "Ketik Nilai Terkecil: ";
    cin >> nmin;
    cout << "Ketik Nilai Terbesar: ";
    cin >> nmax;
    cout << "Ketik Nilai KPK-nya: ";
    cin >> div;
    cout << "Ketik Nilai Nomor Ke-2: ";
    cin >> num2;
    for (int i=nmin;i<=nmax;i++){
        if(KPK(i,num2)==div){
            counter++;
            cout <<i<< "["<<counter<<"], ";
        }
        else{
            
        }
    }
    cout << "Totalnya adalah: "<<counter;
    cin >> nmin;
}