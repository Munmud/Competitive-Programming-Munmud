#include<bits/stdc++.h>
using namespace std ;
/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size() ;
        int m = mat[0].size() ;

        if ( (n*m) != (r*c) ) return mat ;
        vector<vector<int> > v (r,vector<int>(c,0)) ;

        int i=0,j=0,ii=0,jj=0 ;

        while(1){
            v[ii][jj]= mat[i][j] ;
            if (i == n-1 && j == m-1) break ;
            j++ , jj++ ;
            if(j == m) j = 0 , i++ ;
            if(jj == c) jj = 0 , ii++ ;
        }

        return v ;
        
    }
};
// @lc code=end

