#include<iostream>
#include<vector>
using namespace std;
int main()
{
 return 0;
}
class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long sum=0;
        long long res=0;
        int x=0;
        for(int i=0;i<nums.size();i++){ 
            sum+=nums[i];
            
            while((sum*(i-x+1))>=k){
                sum=sum-nums[x];
                x++;
            }
            res+=i-x+1;
        }
        
        return res;
    }
};