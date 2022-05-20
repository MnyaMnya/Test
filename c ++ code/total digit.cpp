#include <iostream>
using namespace std;
int main()
{
int referensi,nilai=0,digit;
int nilaiTerkecil,nilaiTerbesar;
line1:
    nilai=0;
cout << "Ketik nilai terkecil: ";
cin >> nilaiTerkecil;
cout << "Ketik nilai terbesar: ";
cin >> nilaiTerbesar;
for (int i=nilaiTerkecil;i<=nilaiTerbesar;i++){
digit=0;
referensi = i;
while(referensi>0)
{
digit=referensi%10;
nilai=nilai+digit;
referensi=referensi/10;
}
}
cout<<"Jumlah Digit adalah : "<<nilai<<endl;
goto line1;
return 0;
}
