
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

template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}


const ll MOD = 1e9+123 ;
const int N = 1e6+100 ;
const int B = 29 ;


int _hash[N] , _revHash[N] , inv[N] ;
int n  ;

inline int range(int l , int r)
{
    int ret = (_hash[r + 1] - _hash[l]) * 1ll * inv[l] % MOD;
    if (ret < 0)
        ret += MOD;
    return ret;
}

inline int revRange(int lll , int rr)
{
    int l = n - rr-1 ;
    int r = n - lll-1 ;
    int ret = (_revHash[r + 1] - _revHash[l]) * 1ll * inv[l] % MOD;
    if (ret < 0)
        ret += MOD;
    return ret;
}

void __HASH(string & t )
{
    // MEM(_hash, 0) ;
    // MEM(_revHash, 0) ;

    n = t.size();
    string tt = t ;
    reverse(ALL(tt)) ;

    int power = 1;
    for (int i = 0; i < n; ++i)
    {
        _hash[i + 1] = (_hash[i] + power * 1ll * (t[i] - 'a' + 1)) % MOD;
        _revHash[i + 1] = (_revHash[i] + power * 1ll * (tt[i] - 'a' + 1)) % MOD;
        power = power * 1ll * B % MOD;
    }
}

void go(string s)
{
    __HASH(s) ;
    int n = s.size() ;

    for (int i = n ; i>0 ; i--)
    {
        if ( range(0,i-1) == revRange(0,i-1) ){
            cout << s.substr(0,i) ;
            return ;
        }
        if (range(n-i , n-1) == revRange(n-i,n-1) ){
            cout << s.substr(n-i,i) ;
            return ;
        }
    }
}


void _main_main()
{
    string s ;
    cin >> s ;
    int k = 0 ;
    while(k< s.size()-k-1){
       if (s[k] == s[s.size() -k-1]) k++ ;
       else break ;
    }
    if (k > 0) cout << s.substr(0 , k) ;

    go( s.substr(k ,s.size() - 2*k ) ) ;

    if (k>0) cout << s.substr(s.size()-k , k) ;

    cout << nl ;

}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    inv[0] = 1, inv[1] = modinverse((ll)B, MOD);
    for (int i = 2; i < N; ++i) inv[i] = inv[i - 1] * 1LL * inv[1] % MOD;

    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}
