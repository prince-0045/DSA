#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int x = 12345;
    //string s = (string)x; // Error this wont be possible in case of string {string cant be type cast}
    string s = to_string(x);
    cout<<s;
}
