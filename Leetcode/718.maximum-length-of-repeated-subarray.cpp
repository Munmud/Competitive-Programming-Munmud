#include <bits/stdc++.h>
using namespace std; 
/*
 * @lc app=leetcode id=718 lang=cpp
 *
 * [718] Maximum Length of Repeated Subarray
 */

// @lc code=start
#define FORN(i,n) for(int i = 0 ; i<n ; i++)

class Solution {
public:
    int findLength(vector<int>& a, vector<int>& b) {
        int dp[a.size()+1][b.size()+1] , ans = 0 ;
        FORN(i,a.size()+1){
            FORN(j,b.size()+1){
                if (i ==0 || j == 0) dp[i][j] = 0 ;
                else{
                    if (a[i-1] == b[j-1]){
                        dp[i][j] = dp[i-1][j-1]+1 ;
                        ans = max(ans,dp[i][j]) ;
                    } 
                    else dp[i][j]=0 ;
                }
            }
        }

        return ans ;
        
    }
};
// @lc code=end

