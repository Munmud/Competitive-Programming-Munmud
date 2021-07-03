
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


const ll MOD = 1e9+7 ;
const int N = 2e6+100 ;
// const int B = 37 ;

// template <class T> inline T bigmod(T p,T e,T M){
//     ll ret = 1;
//     for(; e > 0; e >>= 1){
//         if(e & 1) ret = (ret * p) % M;
//         p = (p * p) % M;
//     } return (T)ret;
// }
// template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

// int inv[N] ;
// struct HASHING{
//     ll MOD ;
//     int N ,B ;
//     vector <int> hash  ;
//     // vector <int> revHash ;
//     int n ;

//     HASHING(int _N , int _B , ll _M){
//         N = _N ;
//         B = _B ;
//         MOD = _M ;
//         hash.resize(N) ;
//         // inv.resize(N) ;
//         // revHash.resize(N) ;


//     }

//     // inline int invRange(int lll , int rrr)
//     // {
//     //     int l = n-1-rrr ;
//     //     int r = n-1-lll ;
//     //     int ret = (revHash[r + 1] - revHash[l]) * 1ll * inv[l] % MOD;
//     //     if (ret < 0) ret += MOD;
//     //     return ret;
//     // }

//     inline int range(int l , int r)
//     {
//         int ret = (hash[r + 1] - hash[l]) * 1ll * inv[l] % MOD;
//         if (ret < 0) ret += MOD;
//         return ret;
//     }

//     void gen(string &t)
//     {
//         n = t.size();
//         int power = 1;

//         for (int i = 0; i < n; ++i)
//         {
//             hash[i + 1] = (hash[i] + power * 1ll * (t[i] - 'a' + 1)) % MOD;
//             // revHash[i + 1] = (revHash[i] + power * 1ll * (t[n-1-i] - 'a' + 1)) % MOD;
//             power = power * 1ll * B % MOD;
//         }
//     }

// }*h1 ,*h2;

const ll MMOD1 = 1000000007 ;
const ll MMOD2 = 1000000009 ;
const int BB1 = 47 ;
const int BB2 = 31 ;



template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

int inv1[N], inv2[N] ,power1[N] , power2[N] ;
struct HASHING{
    ll MOD1, MOD2 ;
    int B1 , B2, has1[N] , has2[N] ;
    int n ;
 
    HASHING( int _B1 , ll _M1 , int _B2 , ll _M2 ){
        B1 = _B1 ;
        B2 = _B2 ;
        MOD1 = _M1 ;
        MOD2 = _M2 ;
    }

    inline PII range(int l , int r)
    {
        int ret1 = (has1[r + 1] - has1[l]) * 1ll * inv1[l] % MOD1;
        int ret2 = (has2[r + 1] - has2[l]) * 1ll * inv2[l] % MOD2;
        if (ret1 < 0) ret1 += MOD1;
        if (ret2 < 0) ret2 += MOD2;
        return {ret1,ret2};
    }
 
    void gen(string &t)
    {
        n = t.size();

 
        for (int i = 0; i < n; ++i){
            has1[i + 1] = (has1[i] + power1[i] * 1ll * (t[i] - 'a' + 1)) % MOD1;
            has2[i + 1] = (has2[i] + power2[i] * 1ll * (t[i] - 'a' + 1)) % MOD2;
        }
    }
 
}*h1 ,*h2;
int arr[N] ;
void _main_main()
{
    ll n , k  ; cin >>n>>k ;
    string s ; cin >> s  ;
    int len = s.size() ;

    h1 = new HASHING(BB1,MMOD1,BB2,MMOD2) ;

    int m ;
    cin >> m ;

    map<PII , int> mp ;
    FORN(i,m)
    {
        string tt ; cin >> tt ;
        h1->gen(tt) ;
        mp[h1->range(0,k-1)] = i+1 ;
    }

    s+=s ;
    h1->gen(s) ;

    set<int> se[k] ;
    multiset<int> Mse[k] ;

    for (int i = 0 ; i+k-1<2*len; i++)
    {
        PII id = h1->range(i,i+k-1) ;
        if (mp.count(id)) arr[i] = mp[id] ;

        // wa(arr[i]) ;

        if (i>len){
            int j = i-len ;
            if (arr[j] !=0){
                auto it = Mse[j%k].find(arr[j]) ;
                if (it != Mse[j%k].end()) Mse[j%k].erase(it) ;
                if( Mse[j%k].count(arr[j]) == 0) se[j%k].erase(arr[j]) ;
            }
        }

        if (arr[i] != 0){
            se[i%k].insert(arr[i]) ;
            Mse[i%k].insert(arr[i]) ;
        }
        if (se[i%k].size() == n){
                cout << "YES" << nl ;
            for (int p = i-len+k ; p<= i ; p+=k){
                cout << arr[p] << " " ;
            }
                return ;
        }
        // cout << se[i%k] << nl ;
    }

    cout << "NO" << nl ;




}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // inv[0] = 1, inv[1] = modinverse((ll)B, MOD);
    // for (int i = 2; i < N; ++i) inv[i] = inv[i - 1] * 1LL * inv[1] % MOD;
    inv1[0] = 1, inv1[1] = modinverse((ll)BB1, MMOD1);
    inv2[0] = 1, inv2[1] = modinverse((ll)BB2, MMOD2);

    power1[0] = 1;
    power2[0] = 1;
    power1[1] = BB1 %MMOD1;
    power2[1] = BB2 %MMOD2;

    for (int i = 2; i < N; ++i){
    inv1[i] = inv1[i - 1] * 1LL * inv1[1] % MMOD1;
    inv2[i] = inv2[i - 1] * 1LL * inv2[1] % MMOD2;
    power1[i] = power1[i-1] * 1ll * BB1 % MMOD1;
    power2[i] = power2[i-1] * 1ll * BB2 % MMOD2;
    } 

    int testCase = 1 ;//cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}
