
/*
Moontasir Mahmood 
Information and Communication Engineering 
University of Rajshahi 
https://github.com/Munmud 
moontasir042@gmail.com 
 */


#include <bits/stdc++.h>

#define setinf(ar)              memset(ar,126,sizeof ar)
#define MEM(a, b)               memset ( a, (b), sizeof(a) )
#define MAX(a, b)               ((a) > (b) ? (a) : (b))
#define MIN(a, b)               ((a) < (b) ? (a) : (b))
#define ABS(X)                  ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X)                    ( (X) * (X) )
#define SZ(V)                   (int )V.size()
#define FORN(i, n)              for(int i = 0; i < n; i++)
#define FORAB(i, a, b)          for(int i = a; i <= b; i++)
#define ALL(V)                  V.begin(), V.end()
#define ALLR(V)                 V.rbegin(), V.rend()
#define IN(A, B, C)             ((B) <= (A) && (A) <= (C))
#define AIN(A, B, C)            assert(IN(A, B, C))

#define wa2(x , y)              cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define wa(x)                   cout << (#x) << " is " << (x) << endl
#define nl                      "\n"


#define ll                      long long int
#define xx                      first
#define yy                      second
#define pb(x)                   push_back(x)
#define PI                      acos(-1.0)

#define PII                     pair<int, int>
#define PLL                     pair<long long int, long long int>
#define VI                      vector <int>
#define VL                      vector <long long int>

#define BOUNDARY(i, j, r , c)   ((i >= 0 && i < r) && (j >= 0 && j < c))
#define max3(x, y, z)           MAX(MAX(x, y), MAX(y, z))

#define front_zero(n)           __builtin_clzll(n)
#define back_zero(n)            __builtin_ctzll(n)
#define total_one(n)            __builtin_popcountll(n)

using namespace std;


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
/*---------------------------------- x ------------------------------------*/

const ll MOD = 1e9+7 ;
const int N = 10000+10 ;
const int B = 29 ;

template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

int has[N] , inv[N] ;
struct HASHING{
    ll MOD ;
    int N ,B ;
    int n ;

    HASHING(int _N , int _B , ll _M){
        N = _N ;
        B = _B ;
        MOD = _M ;
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
            has[i + 1] = (has[i] + power * 1ll * (tolower(t[n-1-i]) - 'a' + 1)) % MOD;
            // revHash[i + 1] = (revHash[i] + power * 1ll * (t[n-1-i] - 'a' + 1)) % MOD;
            power = power * 1ll * B % MOD;
        }
    }
    void gen2(string &t)
    {
        n = t.size();
        int power = 1;

        for (int i = 0; i < n; ++i)
        {
            has[i + 1] = (has[i] + power * 1ll * (t[i] - 'a' + 1)) % MOD;
            // revHash[i + 1] = (revHash[i] + power * 1ll * (t[n-1-i] - 'a' + 1)) % MOD;
            power = power * 1ll * B % MOD;
        }
    }

}*h1 ,*h2;

// map <int , set<int> > mp ;
map <int , string> word ;
ll n  ;
bool dp[N] ;
int max_len ;
vector <string> ans ;

bool go(int idx){
    // wa(idx) ;
    if (idx == n) return 1;
    if (dp[idx] == 1) return 0 ;

    // for (auto i : mp){
    //     int len = i.xx ;
    //     if (idx + len >n) continue ;
    //     if ( i.yy.find (h1->range(idx,idx+len-1) ) != i.yy.end() ){
    //         if (go(idx+len)){
    //             ans.emplace_back(word[h1->range(idx,idx+len-1)]) ;
    //             return true ;
    //         } 
    //     }
    // }

    for (int len = 1 ; len<= max_len ; len++)
    {
        if (idx + len >n) continue ;
        if ( word.count (h1->range(idx,idx+len-1) )){
            if (go(idx+len)){
                ans.emplace_back(word[h1->range(idx,idx+len-1)]) ;
                return true ;
            } 
        }
    }

    dp[idx] = 1 ;

    return 0 ;
}

void _main_main()
{
    cin >> n ;
    string s ,t ;
    cin >> s ;
    int m ; cin >> m ;

    h1 = new HASHING(N,B,MOD) ;

    max_len = 0 ;

    FORN(i,m)
    {
        cin >> t ;
        h1->gen(t) ;
        max_len = MAX(max_len , t.size()) ;
        // mp[t.size()].insert(h1->range(0,t.size()-1)) ;
        word[h1->range(0,t.size()-1)] = t ;
    }

    h1->gen2(s) ;
    go(0) ;


    cout << ans.back() ;

    for (int i = ans.size()-2 ; i>=0 ; i--) cout << " " << ans[i] ;


}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    inv[0] = 1, inv[1] = modinverse((ll)B, MOD);
    for (int i = 2; i < N; ++i) inv[i] = inv[i - 1] * 1LL * inv[1] % MOD;

    int testCase = 1 ;//cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}
