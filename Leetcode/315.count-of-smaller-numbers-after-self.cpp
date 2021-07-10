#include<bits/stdc++.h>
using namespace std ;

/*
 * @lc app=leetcode id=315 lang=cpp
 *
 * [315] Count of Smaller Numbers After Self
 */

// @lc code=start
const int N = 2e4+100 ;
int tree[1000000] ;

struct seg{
    seg(){
        memset(tree,0,sizeof(tree)) ;
    }
    void update(int node , int b,int e,int idx){
        if (idx<b || e<idx) return ;
        if (b == e){
            tree[node]+= 1 ;
            return ;
        }


        int left = node*2 ;
        int right = node*2+1 ;
        int mid = (b+e)/2 ;

        update(left,b,mid,idx) ;
        update(right,mid+1,e,idx) ;

        tree[node] = tree[left] + tree[right] ;
    }

    int qry(int node , int b , int e , int i ,int j){
        if (b> j || e<i) return 0 ;
        if (b>=i && e<=j){
            return tree[node] ;
        }
        // cout << b << " " << e << endl ;

        int left = node*2 ;
        int right = node*2+1 ;
        int mid = (b+e)/2 ;

        int p1 = qry(left,b,mid,i,j) ;
        int p2 = qry(right,mid+1,e,i,j) ;

        return p1+p2 ;
    }
};




#define FORN(i,n) for (int i = 0 ; i<n ; i++)
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size() ;
        
        seg *se = new seg() ;

        vector<int> ans(n) ;

        for (int i = n-1 ; i>=0 ; i--){
            int x = nums[i]  + 1e4+10 ;
            ans[i] = se->qry(1,1,N,1,x-1) ;
            se->update(1,1,N,x) ;
        }

        return ans ;

        
    }
};
// @lc code=end

