#include <iostream>
using namespace std;
int main(){
int input;
int min_x = 30, max_x = 50;
int min_y = 60, max_y = 90;

// solutions exist in this interval
int min_z = min_x + min_y, max_z = max_x + max_y;

cin >> input;

// solutions possible?
if (input >= min_z && input <= max_z)
{
    // determine solution interval for x (y is dependent)
    cout
    << "Solution:\n"
    << "x in [" << min(max(  input - max_y  , min_x),max_x)
    << ";"      << min(max(  input - min_y  , min_x),max_x) << "], "
    << "y = "   << input << " - x" << endl;
}
else
{
    cout << "No solution." << endl;
}
}