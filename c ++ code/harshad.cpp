#include <iostream>
using namespace std;
int main()
{
int referensi,nilai=0,digit;
int nilaiTerkecil,nilaiTerbesar,jumlah=0;
line1:
nilai=0;
cout << "Ketik nilai terkecil: ";
cin >> nilaiTerkecil;
cout << "Ketik nilai terbesar: ";
cin >> nilaiTerbesar;
for (int i=nilaiTerkecil;i<=nilaiTerbesar;i++){
    nilaiTerkecil = i;
    digit=0;
    referensi = i;
    nilai = 0;
while(referensi>0)
{
    digit=referensi%10;
    nilai=nilai+digit;
    //cout << "N = " << nilai;
    referensi=referensi/10;
}
if (nilaiTerkecil % nilai == 0){
    cout << i << ", ";
    jumlah = jumlah + 1;
}
}
cout<<endl <<"Totalnya adalah : "<<jumlah<<endl;
goto line1;
return 0;
}
