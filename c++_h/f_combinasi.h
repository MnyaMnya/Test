#include <iostream>
#include <cmath>
using namespace std;
int combinasi(int a, int c)
{
	long double a,b=1,i=1,c,d=1,f,g=1;
	f = a - c;
	while (i < a){
		i++;
		b = b * i;
	}
	i = 1;
	while (i < c){
		i++;
		d = d*i;
	}
	i = 1;
	while (i < f){
		i++;
		g = g * i;
	}
	long double e = b / d;
	e = e / g;
	return e;
}