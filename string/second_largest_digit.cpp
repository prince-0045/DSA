#include<iostream>
#include<string>
#include<algorithm>
#define INT_MIN -9999999
using namespace std;
int main()
{
    string s="7666666667";
    int max1=s[0]-'0';
    int max2=INT_MIN;
    for(int i=1;i<s.length();i++){
       int temp=s[i]-'0';
       if(temp>max1){
        max2=max1;
        max1=temp;
    }
       else if(temp< max1 && temp >= max2)max2 = temp;
    }
    cout<<max2;
    return 0;
}
