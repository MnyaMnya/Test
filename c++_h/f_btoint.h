#include <iostream>
#include <string.h>
#include <math.h>
int btoint (char bin[20]){
    using namespace std;
	long int a,b,res=0,bpi;
	b=2;
	a = strlen(bin);
	int x = a-1;
	for (int i=0;i<=a-1;i++){
		if (bin[x]== '1'){
			bpi = pow(b,i);
			res = res + bpi;
			}
			x--;
		}
	return res;
}