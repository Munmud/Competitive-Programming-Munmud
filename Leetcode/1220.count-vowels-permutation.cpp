#include<bits/stdc++.h>
using namespace std ;

/*
 * @lc app=leetcode id=1220 lang=cpp
 *
 * [1220] Count Vowels Permutation
 */

// @lc code=start
#define ll long long
#define FORN(i,n) for (int i = 0 ; i<n ; i++)
#define FORAB(i,a,b) for (int i = a ; i<=b ; i++)

const ll MOD = 1e9+7 ;

class Solution {
public:
    int countVowelPermutation(int n) {
        vector <ll> prev {1,1,1,1,1} ;

        FORAB(i,2,n){
            vector<ll>nxt(5,0) ;
            FORN(j,5){
                if (j == 0){
                    nxt[1] += prev[0] ;
                    nxt[1] %= MOD ;
                } 
                else if (j == 1){
                    nxt[0] += prev[1] ;
                    nxt[0] %= MOD ;
                    nxt[2] += prev[1] ;
                    nxt[2] %= MOD ;
                }
                else if (j == 2){
                    nxt[0] += prev[2] ;
                    nxt[0] %= MOD ;
                    nxt[1] += prev[2] ;
                    nxt[1] %= MOD ;
                    nxt[3] += prev[2] ;
                    nxt[3] %= MOD ;
                    nxt[4] += prev[2] ;
                    nxt[4] %= MOD ;
                }
                else if (j == 3){
                    nxt[2] += prev[3] ;
                    nxt[2] %= MOD ;
                    nxt[4] += prev[3] ;
                    nxt[4] %= MOD ;

                }
                else if (j == 4){
                    nxt[0] += prev[4] ;
                    nxt[0] %= MOD ;
                }
            }
            prev = nxt ;
        }

        ll res = 0 ;
        for (auto x : prev){
            res+= x ;
            res%=MOD ;
        } 

        return (int)res ;
        
    }
};
// @lc code=end

