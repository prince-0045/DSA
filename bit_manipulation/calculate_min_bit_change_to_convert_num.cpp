/*
in question basically we have to detect how many bits are differ.
1.brute froce:-convert binary and comparre je same na hoy count++..
2. xor operation so same hoy 0 and non same 1 
    ->then calculate 1 
        1.builtin_popcount
        2.Brian Kernigans algorithm
*/

#include<iostream>
using namespace std;
int main()
{
    int num=0;
    int num2=15;
    int num3=num ^ num2;
    cout<<__builtin_popcount(num3);
 return 0;
}
