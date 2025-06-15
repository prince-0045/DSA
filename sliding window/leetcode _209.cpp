#include<iostream>
#include<vector>
using namespace std;
int main()
{
 return 0;
}
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int res=INT_MAX;
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                res=min(res,i-j+1);
                sum-=nums[j];
                j++;
            }

        }
        if(res==INT_MAX)return 0;
        return res; 
    }

};