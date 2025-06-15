#include<iostream>
#include<vector>
using namespace std;
int main()
{
 return 0;
}
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j=0;
        int counter=0;
        int result=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)counter++;
            while(+counter>k){
                if(nums[j]==0)counter--;
                j++;
            }
             result = max(result, i - j + 1);
        }
        return result;
    }
};