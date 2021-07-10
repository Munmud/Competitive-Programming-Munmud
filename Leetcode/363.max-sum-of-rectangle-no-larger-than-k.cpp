#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=363 lang=cpp
 *
 * [363] Max Sum of Rectangle No Larger Than K
 */

// @lc code=start

#define FORN(i,n) for (int i = 0 ; i<n ; i++)
#define FORAB(i,a,b) for (int i = a ; i<=b ; i++)

class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& v, int k) {
        int n = v.size() ;
        int m = v[0].size() ;

        int ans = INT_MIN ;

        vector<vector<int> > sum(n, vector<int>(m)) ;
        FORN(i,n) FORN(j,m){
            if (j == 0) sum[i][j] = v[i][j] ;
            else sum[i][j] = sum[i][j-1] + v[i][j] ;
        }

        FORN(i,m) FORAB(j,i,m-1){
            vector<int> arr(n+1) ;
            arr[0] = 0 ;
            set<int> se ;
            se.insert(0) ;
            FORN(p,n){
                arr[p+1] = sum[p][j] - (i >0 ? sum[p][i-1] : 0) ;
                if (p >0) arr[p+1]+= arr[p] ;
                auto it = se.lower_bound(arr[p+1]-k) ;
                int s = arr[p+1] ;
                if (it != se.end()) s-= *it ;
                if (s <=k) ans = max(ans,s) ;

                se.insert(arr[p+1]) ;

            } 


        }

        return ans ;

        
    }
};
// @lc code=end
