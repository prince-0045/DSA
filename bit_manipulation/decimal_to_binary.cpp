#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
string decimal_to_binary_normal(int n){
    string s="";
    while(n>0){
        if(n%2==0)s+='0';
        else s+='1';
        n=n/2;
    }
    reverse(s.begin(),s.end());
    return s;
}
string decimal_to_binary_bit_manupulation(int n){
    string s="";
    while(n>0){
         if(n%2==0)s+='0';
        else s+='1';
        n=n/2;
    }
        n=n>>1;
        return s;
}
int main()
{
    cout<<decimal_to_binary_bit_manupulation(15);
 return 0;
}
