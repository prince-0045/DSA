/*
    //Brian Kernigans algorithm
    
    in binary jya jya 1 hoy e set bit che.
    we have to find how many setbits are present in number.
    we have one inbuid funtion __builtin_popcount(int n)
    now to humon approach
    1.make decimal into binary and count 1(itreation vadhare thse)
    2.thinking two part of x and x-1 like
        1.they contain same bits of some part.
        2.they contain fliped bits of some part.
        then apply (and  operation) between x and x-1till we dont get no as 0;
*/
#include<iostream>
using namespace std;
int main()
{
   //cout<<__builtin_popcount(7);
   int n=21;
   int count=0;
   while(n!=0){
        n=n&n-1;
        count++;
   }
   cout<<count;
    
 return 0;
}
