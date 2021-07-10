#include<bits/stdc++.h>
using namespace std ;

/*
 * @lc app=leetcode id=300 lang=cpp
 *
 * [300] Longest Increasing Subsequence
 */

// @lc code=start
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        

        int arr[ (int)nums.size()], mx = 0 ; ;
        for (int i = 0 ; i<nums.size() ; i++){
            arr[i] = 1 ;
            for (int j = 0 ; j<i ; j++){
                if(nums[j]<nums[i]) arr[i] = max(arr[i],arr[j]+1) ;
            }
            mx = max(mx,arr[i]) ;
        }

        return mx ;
        
    }
};
// @lc code=end

