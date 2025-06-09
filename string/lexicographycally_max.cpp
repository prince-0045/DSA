/*
for finding lexicographically maximum work form sentence we do below steps
1.to differciate word 
2.then check

*/ 


#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //using extra space
    // vector<string>ans;
    // string str = " am amm a";
    // stringstream ss(str);
    // string temp;

    // while (ss>>temp)
    // {
    //     ans.push_back(temp);   
    // }
    // sort(ans.begin(),ans.end());
    // cout<<ans[ans.size()-1];
    // return 0;

    //2nd method
    string str = " am amm a";
    stringstream ss(str);
    string temp;

    string maxWord = "";  // Initialize empty max word

    while (ss >> temp) {
        if (temp > maxWord) {
            maxWord = temp;  // Lexicographically greater word
        }
    }

    cout << maxWord;
    return 0;
}

