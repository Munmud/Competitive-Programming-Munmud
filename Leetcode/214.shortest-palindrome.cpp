#include<bits/stdc++.h>
using namespace std; 
/*
 * @lc app=leetcode id=214 lang=cpp
 *
 * [214] Shortest Palindrome
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

#define ll long long
const int NNN = 5e4 +100 ;

template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}
int has[NNN],inv[NNN],revHash[NNN];
struct HASHING{
    ll MOD ;
    int N ,B ;
    int n ;

    HASHING(int _N , int _B , ll _M){
        N = _N ;
        B = _B ;
        MOD = _M ;

        inv[0] = 1, inv[1] = modinverse((ll)B, MOD);
        for (int i = 2; i < N; ++i) inv[i] = inv[i - 1] * 1LL * inv[1] % MOD;
    }

    inline int invRange(int lll , int rrr)
    {
        int l = n-1-rrr ;
        int r = n-1-lll ;
        int ret = (revHash[r + 1] - revHash[l]) * 1ll * inv[l] % MOD;
        if (ret < 0) ret += MOD;
        return ret;
    }

    inline int range(int l , int r)
    {
        int ret = (has[r + 1] - has[l]) * 1ll * inv[l] % MOD;
        if (ret < 0) ret += MOD;
        return ret;
    }

    void gen(string &t)
    {
        n = t.size();
        int power = 1;

        for (int i = 0; i < n; ++i)
        {
            has[i + 1] = (has[i] + power * 1ll * (t[i] - 'a' + 1)) % MOD;
            revHash[i + 1] = (revHash[i] + power * 1ll * (t[n-1-i] - 'a' + 1)) % MOD;
            power = power * 1ll * B % MOD;
        }
    }

}*h1 ,*h2;
class Solution {
public:

    bool check(int n , string & s){
        if (n&1){
            int id = n/2 ;
            int nn = n - s.size() ;
            int leftLen = id-nn ;
            if(leftLen == 0) return true ;
            if (h1->range(nn-nn , id-1-nn) == h1->invRange(id+1-nn, id+leftLen-nn)) return true ;
        }
        else{
            int id = n/2-1 ;
            int nn = n - s.size() ;
            int leftLen = id-nn+1 ;
            if (h1->range(nn-nn,id-nn) == h1->invRange(id+1-nn , id+leftLen-nn)) return true ;
        }
            return false ;
    }

    string shortestPalindrome(string s) {
        if (s.size() <=1) return s ;
         h1 = new HASHING(s.size(), 29 , 1e9+7) ;
        h1->gen(s) ;

        int md = s.size() ;
        while(1){
            if (check(md,s)) break ;
            md++ ;
        }
        
        string ans; 
        int nn = md - s.size() ;
        for (int i = 0 ; i<nn ; i++) ans+= s[s.size()-i-1] ;
        ans+= s ;

        return ans ;

    }
};
// @lc code=end

