#include<iostream>
#include<vector>
using namespace std;
int main()
{
    class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int res = 0;
        int idx = 0;
        int x = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                idx++;
                count = 0;
            }

            while (idx == k) {
                if (nums[x] % 2 != 0) idx--;
                x++;
                count++;
            }

            res += count;
        }

        return res;
    }
};

 return 0;
}