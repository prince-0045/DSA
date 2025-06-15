#include<iostream>
#include<vector>
using namespace std;
int main()
{
 return 0;
}
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        //same as consecutive ones III
        int n = nums.size();
        int x = 0;
        int res = 0;
        int counter = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) counter++;

            while(counter > 1) {
                if(nums[x] == 0) counter--;
                x++;
            }

            res = max(res, i - x + 1);
        }

        return res - 1; 
    }
};
