#include <iostream>
#include <time.h>
#include <stdlib.h>
void PS( unsigned int Nanoseconds )
{
clock_t wait_nanoseconds = (clock_t) Nanoseconds;
clock_t start_time = clock();
while( clock() != start_time + wait_nanoseconds );
return;
}
int main(){
line1:
    PS(300);
    system("color 1e");
    PS(300);
    system("color 2e");
    PS(300);
    system("color 3e");PS(300);
    system("color 4e");PS(300);
    system("color 5e");PS(300);
    system("color 6e");PS(300);
    system("color 7e");PS(300);
    system("color 8e");PS(300);
    system("color 9e");PS(300);
    system("color ae");PS(300);
    system("color be");PS(300);
    system("color ce");PS(300);
    system("color de");
    PS(300);
    system("color ee");
    PS(300);
    system("color fe");
    goto line1;
}
