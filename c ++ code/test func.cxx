#include <iostream>
#include <string>
using namespace std;
void cmul(string a)
{
	int i;
	i = 0;
	while (i < 10)
	{
		i++;
		cout << a << endl;
	}
}
int main()
{
	cmul("LoL");
	cmul("Hehe");
}