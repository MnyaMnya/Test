#include <iostream>
using namespace std;
double mean (int size){
    int mark[size];
    double counter=0;
    for (int i=0;i<= size-1;i++){
        cout << "Ketik Bilangan Ke "<<i+1<<" : ";
        cin >> mark[i];
        counter = counter + mark[i];
    }
    double result = counter / size;
    return result;
}
int main(){
    int jHim;
    cout << "Ketik jumlah himpunan: ";
    cin >> jHim;
    double rata=mean(jHim);
    cout <<"Rata-Ratanya Adalah: "<<rata;
    cin >> jHim;
}