#include <iostream>
using namespace std;
int FPB(int a, int b){
    int r = 0;
    while(b!=0){
    r = a % b;
    a = b;
    b = r;
    }
    return a;
}
int KPK(int a, int b){
    return (a*b)/FPB(a,b);
}
int TKPK(int a, int b,int c){
    int d=KPK(a,b);
    return KPK(d,c);
}
int main(){
    int p,q,r;
    
    cin >> p;
    cin >> q;
    cin >> r;
    long int n;
    cin >> n;
    int arr[n];
    bool found[n]={false};
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
            if(TKPK(p,q,r)%arr[i]==0){
                found[i] = true;
            }
    }
    for (int i=0;i<n;i++){
        if(found[i]==true) cout << "YA"<<endl;
        else {cout <<"TIDAK"<<endl;}
        
    }
    cin >> p;
}