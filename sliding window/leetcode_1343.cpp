#include<iostream>
#include<vector>
using namespace std;
int main()
{
 return 0;
}
//this is sliding window approach
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int res=0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if((sum/k)>=threshold)res++;
        for(int i=1;i<arr.size()-k+1;i++){
            sum+=arr[i+k-1]-arr[i-1];
            if((sum/k)>=threshold)res++;
        }
        return res;
    }
};

//this is brute force approacd 68/69 test cases runs.

// class Solution {
// public:
// 
//     int numOfSubarrays(vector<int>& arr, int k, int threshold) {
//         int res=0;
//         int sum=0;
//         for(int i=0;i<=arr.size()-k;i++){
//             for(int j=i;j<i+k;j++){
//                 sum+=arr[j];
//             }
//             if((sum/k)>=threshold)res++;
//             sum=0;
//         }
//         return res;
//     }
// };