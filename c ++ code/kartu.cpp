#include <iostream>
#include <stack>
using namespace std;
int main(){
    int counter=0;
    int deckr[1012];
    int deckl[1012];
    for (int i=0;i<1012;i++){
        deckl[i]=i+1;
    }
    for (int i=0;i<1012;i++){
        deckr[i]=i+1+1012;
    }
    
    int deckm[2024];
    for (int i=0;i<1012;i++){
        deckm[counter]=deckr[i];
        counter++;
        deckm[counter]=deckl[i];
        counter++;
    }
    cout << "Susunan Kartu dari atas adalah: "<<endl;
    for (int i=0;i<2024;i++){
        cout<<deckm[i]<<"("<<i+1<<")"<<", ";
    }
    cin >> counter;
}