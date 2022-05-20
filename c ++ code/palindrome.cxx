#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
	int rev = 0, digit, n;
	n = num;
	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} 
	while (num != 0);
	if (n == rev)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int n;
	line1:
	cout << "Ketik sebuah angka: ";
	cin >> n;

	if (isPalindrome(n) == true)
	{
		cout << n << " Adalah bilangan palindrome"<< endl;
	}
	else
	{
		cout << n << " Bukan bilangan palindrome" << endl;
	}
	goto line1;
	return 0;
}