#include <string>
#include <bitset>
#include <iostream>
using namespace std;
int main(){
  string myString;
  cin >> myString;
  for (std::size_t i = 0; i < myString.size(); ++i)
  {
      cout << bitset<8>(myString.c_str()[i]) << endl;
  }
}