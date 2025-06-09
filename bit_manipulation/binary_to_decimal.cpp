#include<iostream>
#include<string>
#include<math.h>
// in second function 1<< size-index-i means power(2,i)
using namespace std;
int binary_to_decimal_normal(string s){
      int num=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1')num+=pow(2,s.size()-1-i);
    }
    return num;
}
int binary_to_decimal_bit_manipulation(string s){
     int num=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1')num+=  1 << (s.size()-i-1);
    }
    return num;
}
int main()
{
    string  s="1111";
    cout<<binary_to_decimal_bit_manipulation(s);
    return 0;
}
