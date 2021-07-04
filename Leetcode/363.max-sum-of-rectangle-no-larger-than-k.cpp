#include <bits/stdc++.h>
using namespace std;

/*
 * @lc app=leetcode id=363 lang=cpp
 *
 * [363] Max Sum of Rectangle No Larger Than K
 */

// @lc code=start

/*---------------------------------- Debug ------------------------------------*/

#define wa(x)            cout << (#x) << " is " << (x) << endl
#define wa2(x , y)       cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define wa3(x , y , z )  cout << (#x) << " " << (#y)<<  " " << (#z)<< " is " << (x) << " " << (y)<< " " << (z) <<  endl
#define wa4(x , y , z, w )cout << (#x) << " " << (#y)<<  " " << (#z) <<  " " << (#w)<< " is " << (x) << " " << (y)<< " " << (z) << " " << (w) <<  endl

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}
template <class T>
ostream & operator << (ostream & os, vector <T> const& x) {
    os << "{ ";
    for(auto& y : x) os << y << " ";
    return os << "}";
}
template <class T>
ostream & operator << (ostream & os, set <T> const& x) {
    os << "{ ";
    for(auto& y : x) os << y << " ";
    return os << "}";
}
template <class T>
ostream & operator << (ostream & os, list <T> const& x) {
    os << "{ ";
    for(auto& y : x) os << y << " ";
    return os << "}";
}
template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
    os << "[";
    typename multiset< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}
template < typename F, typename S >
ostream &operator << ( ostream & os, const multimap< F, S > &v ) {
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}
/*---------------------------------- x ------------------------------------*/

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
            vector<int> arr(n) ;
            set<int> se ;
            se.insert(0) ;
            FORN(p,n){
                arr[p] = sum[p][j] - (i >0 ? sum[p][i-1] : 0) ;
                if (p >0) arr[p]+= arr[p-1] ;
                auto it = se.upper_bound(arr[p]-k) ;
                int s = arr[p] ;
                if (it != se.end()) s-= *it ;
                if (s <=k) ans = max(ans,s) ;
                se.insert(arr[p]) ;
            } 


        }

        return ans ;

        
    }
};
// @lc code=end
