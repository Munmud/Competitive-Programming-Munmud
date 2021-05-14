
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

template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

struct HASHING{
    ll MOD ;
    int N ,B ;
    vector <int> hash , inv ;
    // vector <int> revHash ;
    int n ;

    HASHING(int _N , int _B , ll _M){
        N = _N ;
        B = _B ;
        MOD = _M ;
        hash.resize(N) ;
        inv.resize(N) ;
        // revHash.resize(N) ;

        inv[0] = 1, inv[1] = modinverse((ll)B, MOD);
        for (int i = 2; i < N; ++i) inv[i] = inv[i - 1] * 1LL * inv[1] % MOD;
    }

    // inline int invRange(int lll , int rrr)
    // {
    //     int l = n-1-rrr ;
    //     int r = n-1-lll ;
    //     int ret = (revHash[r + 1] - revHash[l]) * 1ll * inv[l] % MOD;
    //     if (ret < 0) ret += MOD;
    //     return ret;
    // }

    inline int range(int l , int r)
    {
        int ret = (hash[r + 1] - hash[l]) * 1ll * inv[l] % MOD;
        if (ret < 0) ret += MOD;
        return ret;
    }

    void gen(string &t)
    {
        n = t.size();
        int power = 1;

        for (int i = 0; i < n; ++i)
        {
            hash[i + 1] = (hash[i] + power * 1ll * (t[i] - 'a' + 1)) % MOD;
            // revHash[i + 1] = (revHash[i] + power * 1ll * (t[n-1-i] - 'a' + 1)) % MOD;
            power = power * 1ll * B % MOD;
        }
    }

}*h1 ,*h2;


void _main_main()
{
    ll n  ;
    string a,b ;
    cin >> a >> b ;
    ll cc[2] = {0,0} ;
    for (auto i : a) cc[i-'0']++ ;

    h1 = new HASHING(b.size()+5 , 29 , MOD) ;
    h1->gen(b) ;


    int id = *a.begin() - '0' ;
    ll cnt = 0 ;

    for (int i = 1 ; i <b.size() ; i++)
    {
        ll baki = b.size() - cc[id] * i ;
        // wa(baki) ;
        if ( !(baki>0 && baki %cc[id^1] == 0) )  continue ;
        int j = baki / cc[id^1] ;
        // if (i == j) continue ;
        int st = 0 ;
        // set<int> se ;
        int check[2] = {-1,-1} ;

        for (auto ch : a) {
            if (ch-'0' == id){
                if (check[id] == -1) check[id] = h1->range(st , st+i-1) ;
                else if(check[id] != h1->range(st , st+i-1)) {
                    check[id] = -1 ;
                    break ;
                }
                st+= i ;
            }
            else{
                if (check[id^1] == -1) check[id^1] = h1->range(st , st+j-1) ;
                else if(check[id^1] != h1->range(st , st+j-1)) {
                    check[id^1] = -1 ;
                    break ;
                }
                st+= j ;
            } 
        }
        if (check[0] != -1 && check[1] !=-1 && check[0] != check[1]) cnt++ ;
    }

    cout << cnt << nl ;

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
