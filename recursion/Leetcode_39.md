# Leetcode Problem 39 - Combination Sum

## Problem Statement
Given an array of distinct integers `candidates` and a target integer `target`, return a list of all unique combinations of `candidates` where the chosen numbers sum to `target`. You may return the combinations in any order.

The same number may be chosen from `candidates` an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

## Code (C++)

```cpp
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> help;

    // We can also use set as we make all the possible combinations and then take only unique ones.
    // For that we have to not give i as parameter

    vector<vector<int>> helper(vector<vector<int>> input) {
        set<vector<int>> uniqueSet;
        for (auto vec : input) {
            sort(vec.begin(), vec.end()); 
            uniqueSet.insert(vec);       
        }
        return vector<vector<int>>(uniqueSet.begin(), uniqueSet.end());
    }

    void calculation(vector<int>& candidates, int target, int start) {
        if (target == 0) {
            ans.push_back(help);
            return;
        }
        if (target < 0) return;

        for (int i = start; i < candidates.size(); i++) {
            help.push_back(candidates[i]);
            calculation(candidates, target - candidates[i], i);
            help.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans.clear();
        help.clear();
        calculation(candidates, target, 0);
        return ans; 
    }
};
```

## Time Complexity
- **O(2^T)** where T is the target sum. This is because we explore every possible combination that can sum up to the target.
- Each recursive call reduces the target and continues until the target becomes 0 or less.

## Space Complexity
- **O(T)** space for the recursion stack in the worst case.
- **O(K)** for storing combinations in the result where K is the total number of valid combinations.

## Notes
- This is a classic backtracking problem.
- The use of recursion and pruning makes the search space smaller.
