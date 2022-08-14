#include <iostream>
using namespace std;
int j_digit(int nilaiTerkecil,int nilaiTerbesar)
{
int referensi,nilai=0,digit;
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
return nilai;
}
