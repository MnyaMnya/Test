#include <iostream>
using namespace std;
int main(){
    int jumlahKandang;
    cin >> jumlahKandang;
    int cap[jumlahKandang];
    int cost[jumlahKandang];
    for(int i=0;i<jumlahKandang;i++){
        cin >> cap[i];
    }
    for(int i=0;i<jumlahKandang;i++){
        cin >> cost[i];
    }
    long int jumlahBebek;
    cin >> jumlahBebek;
    int berat[jumlahBebek];
    for(int i=0;i<jumlahBebek;i++){
        cin >> berat[i];
    }
    for (int i=0;i<jumlahBebek;i++){
        for (int j=i+1;j<jumlahBebek;j++){
            if(berat[j]>berat[i]){
                int ref = berat[i];
                berat[i] = berat[j];
                berat[j] = ref;
            }
        }
    }
    for (int i=0;i<jumlahKandang;i++){
        for (int j=i+1;j<jumlahKandang;j++){
            if(cost[j]<cost[i]){
                int ref = cost[i];
                cost[i] = cost[j];
                cost[j] = ref;
                int ref2 = cap[i];
                cap[i] = cap[j];
                cap[j] = ref2;
            }
        }
    }
    int x=0;
    long int result=0;
    for(int i=0;i<jumlahBebek;i++){
        if(cap[x]<=0){
            x++;
        }
        result = result + (berat[i]*cost[x]);
        cap[x]--;
    }
    cout << result;
    cin >> result;
}