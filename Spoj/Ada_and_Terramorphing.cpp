
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


struct HASH
{
    ll MOD ;
    int N ;
    int B ;
    vector <int> _hash , inv , _hash2 ;

    HASH(int _N , int _B , ll _MOD){
        N = _N ;
        B = _B ;
        MOD = _MOD ;
        _hash.resize(N) ;
        _hash2.resize(N) ;
        inv.resize(N) ;
            
        inv[0] = 1, inv[1] = modinverse((ll)B, MOD);
        for (ll i = 2; i < N; ++i) inv[i] = inv[i - 1] * 1LL * inv[1] % MOD;
    }

    inline ll range1(ll l , ll r)
    {
        ll ret = (_hash[r + 1] - _hash[l]) * 1ll * inv[l] % MOD;
        if (ret < 0) ret += MOD;
        return ret;
    }
    inline ll range2(ll l , ll r)
    {
        ll ret = (_hash2[r + 1] - _hash2[l]) * 1ll * inv[l] % MOD;
        if (ret < 0) ret += MOD;
        return ret;
    }

    void genHash(string & t , string & p){
        ll n = t.size();
        ll m = p.size() ;

        ll power = 1;
        for (ll i = 0; i < max(n,m); ++i)
        {
            if (i<n)_hash[i + 1] = (_hash[i] + power * 1ll * (t[i] == '-' ?  1  : t[i] == '~' ? 2 : t[i] == '^' ? 3 : 4)) % MOD;
            if(i<m)_hash2[i + 1] = (_hash2[i] + power * 1ll * (p[i] == '-' ?  1  : p[i] == '~' ? 2 : p[i] == '^' ? 3 : 4)) % MOD;
            power = power * 1ll * B % MOD;
        }
    }
}* h1 , *h2;

string t,p ;
bool check(int len)
{

    // unordered_map<int , unordered_set<int> > mp ;
    // for (int i = 0 ; i+len-1 <t.size() ; i++){
    //     mp[h1->range1(i,i+len-1)].insert(h2->range1(i,i+len-1)) ;
    // }
    // for (int j = 0 ; j+len-1 <p.size(); j++){

    //     if( mp[h1->range2(j , j+len-1)].find(h2->range2(j,j+len-1)) != mp[h1->range2(j , j+len-1)].end()  ) return true ;
    // }
    unordered_set <ll> se1,se2 ;
    for (int i = 0 ; i+len-1 <t.size() ; i++){
        se1.insert(h1->range1(i,i+len-1)) ;
        se2.insert(h2->range1(i,i+len-1)) ;
    }
    for (int j = 0 ; j+len-1 <p.size(); j++){
        if(se1.find(h1->range2(j , j+len-1)) != se1.end() && se2.find(h2->range2(j , j+len-1)) != se2.end()) return true ;
    }

    return false ;
}

void _main_main()
{
    ll n  ;
    cin >> t >> p ;

    h1 = new HASH( MAX(SZ(t), SZ(p)) + 5 ,13,(ll) 1e9+7) ;
    h2 = new HASH(MAX(SZ(t), SZ(p)) + 5 ,7,1e9+21) ;

    h1->genHash(t,p) ;
    h2->genHash(t,p) ;

    int lo = 1 ;
    int hi = min(t.size() , p.size()) ;
    int ans = 0 ;
    
    while (lo <= hi){
        int len = (lo + hi) / 2 ;
        if ( check(len) ){
            lo = len + 1 ;
            ans = max(ans , len) ;
        } 
        else hi = len - 1 ;
    }


    cout << ans << nl ;

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
