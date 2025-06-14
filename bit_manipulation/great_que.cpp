/*
given an integer array.
find the length of longest subarray 
which has maximum possible bitwise AND value.
*/
/*
simple end property gt & small < gt;
so main aim is find max number and then checking continous element.
technique:- array + bitwise AND + sliding window type of problem
*/
#include<iostream>
#include<algorithm>
#define INT_MIN -10000000
using namespace std;

int main() {
    int arr[] = {12, 3, 1, 6, 18, 1, 6, 6, 6, 4, 3, 13, 13, 18, 13, 13, 13, 13, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int maxx = INT_MIN;
    for(int i = 0; i < n; i++) {
        maxx = max(maxx, arr[i]); // Step 1: Find max
    }

    int ans = 0, count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == maxx) {
            count++; // extend current segment
            ans = max(ans, count); // update max length
        } else {
            count = 0; // reset if not max
        }
    }

    cout << ans;
    return 0;
}
