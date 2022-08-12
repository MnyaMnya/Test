#include <iostream>
#include <string>
using namespace std;


int main() {
    int size,nilai[size];
    int ref,counter=0;
    //int nilai [8] : (81,78,90,97,85,97,97,88);
    cin >> size;
    for (int i=0;i<size;i++){
        cin >> nilai[i];
    }
    for (int i=0;i<size-1;i++){
        if(nilai[i]<nilai[i+1]){
            ref = nilai[i];
            nilai[i]=nilai[i+1];
            nilai[i+1]=ref;
        }
    }
    cout << "I[0]nya adalah: "<< nilai[0]<<endl;
    for (int i=1;i<size;i++){
        if(nilai[0]==nilai[i]){
            counter++;
            cout << "Yang sama dengan nilai terbesar: "<<nilai[i]<<endl;
        }
    }
    cout << counter;
 
  return 0;
}
