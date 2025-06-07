#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "raghav garg is at PW";
    cout<<str.length(); // str.size() (SAME)
    
    string str = "abcd";
    cout<<str<<endl;
    str.push_back('e');
    str.push_back('f');
    str.push_back('g'); 
    cout<<str<<endl;

    string s = "raghav";
    cout<<s<<endl;
    s.pop_back();
    s.pop_back();
    cout<<s<<endl;

    string s = "abc";
    cout<<s<<endl;
    s = s + "def";
    s = "xyz" + s; // so we dont need to use strconcat function 
    cout<<s<<endl;

    string s = "abcdef";
    cout<<s<<endl;
    reverse(s.begin()+2,s.begin()+5);
    cout<<s<<endl;

    string s;
    getline(cin,s);//to take input of string

    string s = "abc"; //a,ab,abc,b,bc,c are substring 

}
