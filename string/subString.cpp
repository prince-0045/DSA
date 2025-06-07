#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "abcdef";
    // s.substr(idx);
    cout<<s.substr(2); // cdef
    cout<<endl;
    cout<<s.substr(2,3);//cde
}
