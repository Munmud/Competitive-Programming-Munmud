 
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
const int N = 1e6+10 ;
const int B = 79 ;
 
template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}
 
int inv[N] , power[N] ;
struct HASHING{
    ll MOD ;
    int B ;
    int n ;
    int has[N]  ;
 
    HASHING( int _B , ll _M){
        B = _B ;
        MOD = _M ;
        has[0] = 0 ;
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
 
        for (int i = 0; i < n; ++i)
        {
            has[i + 1] = (has[i] + power[i] * 1ll * (t[i] - 43 )) % MOD;
        }
    }
 
    void add(string &t)
    {
        // int idx = n ;
        for (int i = n ; i<t.size() ; i++){
            has[i + 1] = (has[i] + power[i] * 1ll * (t[i] - 43 )) % MOD;
            // has[idx + 1] = (has[idx] + power[idx] * 1ll * (t[i] - 'A' + 1)) % MOD;
        }
        n= t.size() ;
    }
 
}*h1 ,*h2;
 
string s , ans ;
 
void _main_main()
{
    ll n  ;
    cin >>n ;
    cin >> ans ;
 
    h1 = new HASHING(B, MOD) ;
    h2 = new HASHING(B, MOD) ;
 
    h1->gen(ans) ;
 
    FORN(i,n-1)
    {
        cin >> s ;
        h2->gen(s) ;
        // wa2(ans,s) ;
 
        for (int len = MIN(s.size() , ans.size() ) ; len>=0 ; len--)
        {
            // wa(len) ;
            if (len == 0){
                ans += s ;
                h1->add(ans) ;
                break ;
            }
            if (h1->range(ans.size()-len , ans.size()-1) == h2->range(0,len-1)){
                ans += s.substr(len);
                h1->add(ans) ;
                break ;
            }
        }
 
    }
        cout << ans << nl ;
        // wa(h1->n) ;
 
}

 
 
 
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    
    inv[0] = 1, inv[1] = modinverse((ll)B, MOD);
    power[0] = 1 ;
    power[1] = B %MOD ;
 
    for (int i = 2; i < N; ++i){
        inv[i] = inv[i - 1] * 1LL * inv[1] % MOD;
        power[i] = power[i-1] * 1ll * B %MOD ;
    } 
 
    int testCase = 1 ;//cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}