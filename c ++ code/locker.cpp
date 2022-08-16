#include <iostream>
using namespace std;
int main(){
    int mul=1;
    bool locker[20]={false};
    for (int murid=0;murid<20;murid++){
        int counter = murid+1;
        while(counter<=20){
            if(locker[counter-1]==true){
                locker[counter-1]=false;
            }
            else if(locker[counter-1]==false){
                locker[counter-1]=true;
            }
            counter = counter + mul;
        }
        mul++;
        cout << "Pada Giliran KE: "<<murid+1<<endl;
        for (int jlocker=0;jlocker<20;jlocker++){
        if(locker[jlocker]==true){
            cout << "Locker ke ["<<jlocker+1<<"]: "<<"Terbuka"<<endl;
        }
        else if(locker[jlocker]==false){
            cout << "Locker ke ["<<jlocker+1<<"]: "<<"Tertutup"<<endl;
        }
    }
    }
    
    cin >> mul;
}