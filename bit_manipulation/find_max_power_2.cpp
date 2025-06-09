/*
    for given integer n,we have to find maximum power of two that is smaller than n.
1.brute force:-decimal to binary,then find msb one index(1 based)then 2 res to index
2.apply Brian Kernigans algorithm and save number before last iteration that is our answer
3.
*/

#include<iostream>
using namespace std;
int main()
{
    /*
    2nd approach
    int n=24;
    int temp;
    while(n!=0){
        temp=n;
        n=n&(n-1);
    }
    cout<<temp;
    */

    //3rd approach
        int n=24;
        n=n|n>>1;
        n=n|n>>2;
        n=n|n>>4;
        n=n|n>>8;
        n=n|n>>16;//for 16 bit no.
        n=(n+1)>>1;//(n+1)/2 j che
        cout<<n;
    
 return 0;
}
