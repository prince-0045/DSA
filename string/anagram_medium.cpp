/*
// sliding window concept is used...

//     in this we have given 2 strings  s and p.
//     we have to find starting index of all anagram of p in s.
//     1. p ni jetli length hoy etla length ni s ni substring ma we have to search.
//     if p.length>s.length state away we can say -1
*/ 
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<int> v;
    vector<int> ss(26, 0); 
    vector<int> pp(26, 0);

    string s = "gigiprangice";
    string p = "gi";

    if (p.length() > s.length()) {
        cout << "-1";
        return 0;
    }

    for (int i = 0; i < p.length(); i++) {
        pp[p[i] - 'a']++;
        ss[s[i] - 'a']++;
    }

    bool match = true;
    for (int i = 0; i < 26; i++) {
        if (pp[i] != ss[i]) {
            match = false;
            break;
        }
    }
    if (match) v.push_back(0);
    for (int i = 1; i <= s.length() - p.length(); i++) {
      
        ss[s[i - 1] - 'a']--;
        ss[s[i + p.length() - 1] - 'a']++;

        match = true;
        for (int j = 0; j < 26; j++) {
            if (pp[j] != ss[j]) {
                match = false;
                break;
            }
        }
        if (match) v.push_back(i);
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
