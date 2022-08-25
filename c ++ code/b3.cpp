#include <iostream>
using namespace std;
int main(){
    int n,p,q;
    cin >> n>>p>>q;
    int mem[n];
    for (int i=0;i<n;i++){
        cin >> mem[i];
    }
    int x[q];
    for (int i=0;i<q;i++){
        cin >> x[i];
        x[i]=mem[x[i]-1];
    }

    for(int i=0;i<q;i++){
        int counter =0;
        int y=1;
        while(counter <=p){
        int newmem[y];
        counter =0;
        newmem[0]==x[i];
        for (int z=1;z<y;z++){
            if(mem[z-1]==x[i]){}
            else{
            newmem[z]==mem[z-1];
            }
        }
        for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(newmem[j]>newmem[i]){
                int ref = newmem[i];
                newmem[i] = newmem[j];
                newmem[j] = ref;
            }
        }
    }
    counter = newmem[0]-newmem[y-1];
            y++;
        }
        cout << y-1<<endl;
    }
    cin >> n;

}