#include<iostream>
#include<vector>
using namespace std;
int main()
{
 return 0;
}
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
        int res=0;
        int x=0;
        int pd=1;
        for(int i=0;i<nums.size();i++){
            pd*=nums[i];
            while(pd>=k){
                pd/=nums[x];
                x++;
            }
            res+=i-x+1;
        }
        return res;
    }
};