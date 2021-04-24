
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
const int N = 2000+10 ;

ll n ,m ;
string s[N] ;
vector<int> v1,v2 ;

template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}


int has2[205][N] ;

struct HASHING{
    ll MOD ;
    int N ,B ;
    vector <int> has , inv , power ;

    HASHING(int _N , int _B , ll _M){
        N = _N ;
        B = _B ;
        MOD = _M ;
        has.resize(N) ;
        inv.resize(N) ;
        power.resize(N) ;

        inv[0] = 1, inv[1] = modinverse((ll)B, MOD);
        power[0] = 1 ; power[1] = power[0] * 1ll * B % MOD;
        for (int i = 2; i < N; ++i){
            inv[i] = inv[i - 1] * 1LL * inv[1] % MOD;
            power[i] = power[i-1] * 1ll * B % MOD;
        } 
    }

    inline int range(int l , int r , int idx)
    {
        int ret = (has2[idx][r + 1] - has2[idx][l]) * 1ll * inv[l] % MOD;
        if (ret < 0) ret += MOD;
        return ret;
    }

    void gen( vector <int> & v , int cmd , int idx)
    {

        if (cmd == 1){
            for (int i = 0; i < m; ++i)
                has[i + 1] = (has[i] + power[i] * 1ll * (s[idx][i] - 'a' + 1)) % MOD;
            v.emplace_back(has[m]) ;
        }
        else{
            for (int i = 0; i < n; ++i)
                has2[idx][i + 1] = (has2[idx][i] + power[i] * 1ll * (s[idx][i] - 'a' + 1)) % MOD ;            
        }
    }



}*h1 ,*h2;

// string txt = "ABABDABACDABABCABAB";
// string pat = "ABABCABAB" ;

void computeLPSArray(VI & pat , vector<int> & lps)
{
    int len = 0, i = 1 ;
    lps[0] = 0 ;

    while (i<pat.size()){
        if (pat[i] == pat[len]){
            len++ ;
            lps[i++] = len ;
        }
        else {
            if (len != 0) len = lps[len-1] ;
            else lps[i++] = 0 ;
        }
    }
}

bool KMPSearch(VI & pat , VI & txt)
{
    int M = pat.size() ;
    int N = txt.size() ;

    // cout << pat << nl ;
    // cout << txt << nl ;

    vector <int> lps(M) ;
    computeLPSArray(pat , lps) ;

    int i = 0 , j = 0 ;
    while (i<N){
        // wa2(i,j) ;
        if (pat[j] == txt[i]) i++ , j++ ;

        if (j == M){
            // cout << "Found Pattern at index " << i-j << endl ;
            cout << i-j+1 << " " ;
            // wa(i-j+1) ;
            return true ;
            j = lps[j-1] ; 
        }

        else if ( i<N && pat[j] != txt[i] ){
            if (j != 0) j = lps[j-1] ;
            else i = i+1 ;
        }
    
    }
    return false ;
}

bool go(int idx)
{
    // wa(idx) ;
    VI v ;
    for (int i = 0 ; i<m ; i++){
        v.emplace_back(h1->range(idx , idx+m-1 , i)) ;
    }
    // cout << v << nl ;
    if (KMPSearch(v,v1)){
        cout << idx+1 << nl ;
        return true ;
    } 
    return false ;
}


void _main_main()
{
    
    cin >> n >> m ;

    h1 = new HASHING(N,29,MOD) ;

    FORN(i,n) cin >> s[i] ;
    FORN(i,n) h1->gen(v1,1,i) ;
    // cout << v1 << nl ;

    FORN(i,m) cin >> s[i]  ;
    FORN(i,m) h1->gen(v2,2,i) ;
    // // cout << v2 << nl ;

    for (int i = 0 ; i+m-1<n ; i++) if (go(i)) break ;
    // bool bb = go(5) ;



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
