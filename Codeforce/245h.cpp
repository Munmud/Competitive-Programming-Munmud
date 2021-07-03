
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


const ll MOD = 1e9+7 ;
const ll MOD2 = 1000000009 ;
const int N = 5000+100 ;
const int B = 29 ;
const int B2 = 31 ;


int _hash[N] , _hash2[N] , inv[N] , inv2[N] ;

inline PII range(int l , int r)
{
    int ret = (_hash[r + 1] - _hash[l]) * 1ll * inv[l] % MOD;
    int ret2 = (_hash2[r + 1] - _hash2[l]) * 1ll * inv2[l] % MOD2;
    if (ret < 0) ret += MOD;
    if (ret2 < 0) ret2 += MOD2;
    return {ret,ret2};
}

void __HASH(string t)
{
    inv[0] = 1, inv[1] = modinverse((ll)B, MOD);
    for (int i = 2; i < N; ++i) inv[i] = inv[i - 1] * 1LL * inv[1] % MOD;

    inv2[0] = 1, inv2[1] = modinverse((ll)B2, MOD2);
    for (int i = 2; i < N; ++i) inv2[i] = inv2[i - 1] * 1LL * inv2[1] % MOD2;
    
    int n = t.size();
    int power = 1;
    int power2 = 1;

    for (int i = 0; i < n; ++i)
    {
        _hash[i + 1] = (_hash[i] + power * 1ll * (t[i] - 'a' + 1)) % MOD;
        power = power * 1ll * B % MOD;
        
        _hash2[i + 1] = (_hash2[i] + power2 * 1ll * (t[i] - 'a' + 1)) % MOD2;
        power2 = power2 * 1ll * B2 % MOD2;
    }
}

bool is_palindrome(int l , int r)
{
    // wa2(l,r) ;
    int len = r-l+1 ;
    if (len == 1) return true ;
    if ( len%2 == 0 ){
        // wa2(l ,l + len/2-1 ) ;
        // wa2(l + len/2  ,r) ;
        if (range(l , l + len/2 -1 ) == range(l + len/2 , r)) 
        return true ;
    }
    else {
        // wa2(l ,l + len/2-1 ) ;
        // wa2(l + len/2+1  ,r) ;
        if (range(l , l + len/2-1) == range(l + len/2+1 , r)) return true ;
    }
    return false ;
}

ll cnt[N][N] ;
bool mark[N][N] ;

void _main_main()
{
    ll n  ;
    string s;
    cin >> s ;
    n = s.size() ;


    // __HASH(s) ;
    // for (int i = 1 ; i <= n ; i++)
    // {
    //     for (int j = 0 ; i+j<=n ; j++ ){
    //         if (is_palindrome(j , i+j-1)) 
    //             mark[i][j] = 1 ;
    //     }
    // }

    for (int j = 0 ; j<n ; j++) mark[1][j] = 1 ;
    for (int j = 0 ; j<n-1 ; j++) if (s[j] == s[j+1] ) mark[2][j] = 1 ;
    for (int i = 3 ; i<=n ; i++)
    {
        for (int j = 0 ; i+j<=n ; j++){
            // if (i%2 == 0){
                if (mark[i-2][j+1] && s[j] == s[j+i-1]) mark[i][j] = 1 ;
            // }
            // else{

            // }
        }
        
    }

    FORN(i,n){
        int cc = 0 ;
        for (int k = i , j = 1; k>=0 ; k-- , j++)
        {
            if (mark[j][k]) cc++ ;
            cnt[j][k] = cc ;
        }
    }

    for (int i = 1 ; i<=n ; i++){
        for (int j = 0 ; j+i<=n ; j++){
            cnt[i][j] += cnt[i-1][j] ;
        } 
    } 

    // for (int i = 1 ; i<=n ; i++){
    //     for (int j = 0 ; j+i<=n ; j++) cout << cnt[i][j] << " " ;
    //     cout << nl ;
    // } 

    // wa(cnt[n][0]) ;

    int q ; cin >> q ;
    FORN(i,q)
    {
        int l,r ;
        cin >> l >> r ;
        // wa2(l,r) ;
        cout << cnt [r-l+1] [ l-1] << nl ;
    } 





}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase = 1 ;//cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}
