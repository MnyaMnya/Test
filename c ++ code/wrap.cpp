#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int lowest( int a, int b, int c)
{
    int min = a;
    if ( b < min ) min = b;
    if ( c < min ) min = c;
    return min;
}

int fabric(int w,int l,int h){
    int result=0;
    int a=l*w,b=w*h,c=l*h;
    result= 2*(a+b+c)+lowest(a,b,c);
    return result;
}
int main(){
   string input, str;
   int w,l,h,result=0;
   for(int i =0;i<1000;i++){
    cin>>str;
   
            string temp;
            stringstream sc(str);
            int z=0;
            while(getline(sc, temp, 'x')){
                
            if (z==0){w=stoi(temp);}
            if (z==1){h=stoi(temp);}
            if (z==2){l=stoi(temp);}
                    
                    z++;
            }
            result= result + fabric(w,l,h);
   }
        cout<<result;
}