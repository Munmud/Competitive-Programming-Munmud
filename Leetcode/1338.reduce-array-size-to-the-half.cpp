#include<bits/stdc++.h>
using namespace std ;

/*
 * @lc app=leetcode id=1338 lang=cpp
 *
 * [1338] Reduce Array Size to The Half
 */

// @lc code=start
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp ;
        for (auto x : arr) mp[x]++ ;

        vector<int> v ;
        for (auto [_,x] : mp) v.push_back(x) ;
        sort(v.begin(),v.end(),greater<int>()) ;
        
        int rem = 0 , cc = 0 , i=0 ;
        while(1){
            rem+= v[i++] ;
            cc++ ;
            if ( (rem*2) >= arr.size() ) break ;
        }
        return cc ;
    }
};
// @lc code=end

