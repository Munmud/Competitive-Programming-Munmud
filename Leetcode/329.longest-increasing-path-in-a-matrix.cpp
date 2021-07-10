#include<bits/stdc++.h>
using namespace std ;

/*
 * @lc app=leetcode id=329 lang=cpp
 *
 * [329] Longest Increasing Path in a Matrix
 */

// @lc code=start

/*----------------------Graph Moves----------------*/
const int fx[]={+1,-1,+0,+0};
const int fy[]={+0,+0,+1,-1};
// const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
// const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

class Solution {
    int n,m, ans ;
    int dp[210][210] ;

    void go (int i , int j , vector<vector<int>>& v){
        dp[i][j] = 1 ; 
        for (int k = 0 ; k<4 ; k++ ){
            int x = i + fx[k] ;
            int y = j + fy[k] ;
            if( x >=0 && x<n && y>=0 && y<m){
                if (v[i][j]< v[x][y]){
                    if (dp[x][y] == -1)go(x,y,v);
                    dp[i][j] = max(dp[i][j],dp[x][y]+1) ;
                }
            } 
        }
        ans = max(ans,dp[i][j]) ;

    }
public:
    int longestIncreasingPath(vector<vector<int>>& v) {{
        n = v.size() ;
        m = v[0].size() ;
        ans = 0 ;
        memset(dp,-1,sizeof(dp)) ;

        for(int i = 0 ; i<n ; i++) for (int j = 0 ; j<m ; j++){
            if (dp[i][j] == -1) go(i,j,v) ;
            // ans = max(ans , dp[i][j]) ;
        }
        return ans ;

    }
        
    }
};
// @lc code=end
// [[0,1,2,3,4,5,6,7,8,9],[19,18,17,16,15,14,13,12,11,10],[20,21,22,23,24,25,26,27,28,29],[39,38,37,36,35,34,33,32,31,30],[40,41,42,43,44,45,46,47,48,49],[59,58,57,56,55,54,53,52,51,50],[60,61,62,63,64,65,66,67,68,69],[79,78,77,76,75,74,73,72,71,70],[80,81,82,83,84,85,86,87,88,89],[99,98,97,96,95,94,93,92,91,90],[100,101,102,103,104,105,106,107,108,109],[119,118,117,116,115,114,113,112,111,110],[120,121,122,123,124,125,126,127,128,129],[139,138,137,136,135,134,133,132,131,130],[0,0,0,0,0,0,0,0,0,0]]

