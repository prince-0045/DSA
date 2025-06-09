// if string is "aeiou" ytoal no of substring is (n*(n+1))/2 when n is length of string
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s="aeidaea";
    int ans=0;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
        else{
            ans+=(count*(count+1))/2;
            count=0;
        }
    }
     ans += (count * (count + 1)) / 2;//bhulna mat last string mate formula nahi follow thato.
    cout<<ans;
    return 0;
}
