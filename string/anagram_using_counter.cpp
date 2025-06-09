#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    string s = "book";
    string r = "koo0";

    vector<int> a(26, 0);

    if(s.length() != r.length()) {
        cout << "Strings are not anagram";
        return 0;
    }

    for(int i = 0; i < s.length(); i++) {
        a[s[i] - 'a']++;
        a[r[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++) {
        if(a[i] != 0) {
            cout << "Strings are not anagram";
            return 0;
        }
    }

    cout << "Strings are anagram";
    return 0;
}
