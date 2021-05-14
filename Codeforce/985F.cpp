
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


const ll MOD = 1e9+7 ;
const int N = 2e5+10 ;
const int B = 7 ;

template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

int inv[N] ;
struct HASHING{
    ll MOD ;
    int N ,B ;
    vector <int> hash ;
    int n ;

    HASHING(int _N , int _B , ll _M){
        N = _N ;
        B = _B ;
        MOD = _M ;
        hash.resize(N) ;


    }

    inline int range(int l , int r)
    {
        int ret = (hash[r + 1] - hash[l]) * 1ll * inv[l] % MOD;
        if (ret < 0) ret += MOD;
        return ret;
    }

    void gen(string &t , int id)
    {
        n = t.size();
        int power = 1;

        for (int i = 0; i < n; ++i)
        {
            hash[i + 1] = (hash[i] + power * 1ll * (t[i] - 'a' == id ? 2 : 1)) % MOD;
            power = power * 1ll * B % MOD;
        }
    }

}*h1 ,*h2;


void _main_main()
{
    ll n , m  ;
    cin >> n >> m ;
    string s ; cin >> s ;

    vector <HASHING *> h(26) ;
    FORN(i,26){
        h[i] = new HASHING(s.size()+5, B,MOD) ;
        h[i]->gen(s,i) ;
    }

    while (m--)
    {
        int x, y , len ;
        cin >> x >> y >> len ;
        x-- , y-- ;
        multiset<int>a,b ;
        FORN(i,26)
        {
            a.insert(h[i]->range(x,x+len-1)) ;
            b.insert(h[i]->range(y,y+len-1)) ;
        }
        if (a == b) cout << "YES" << nl ;
        else cout << "NO" << nl ;
    }




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
