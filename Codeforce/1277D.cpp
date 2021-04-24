
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
const int N = 4e6+10 ;
const int B = 3 ;

template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

int inv[N], has[N] , revhas[N] ;
int len  ;


inline int invRange(int lll , int rrr)
{
    int l = len-1-rrr ;
    int r = len-1-lll ;
    int ret = (revhas[r + 1] - revhas[l]) * 1ll * inv[l] % MOD;
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
    len = t.size();
    int power = 1;

    for (int i = 0; i < len; ++i)
    {
        has[i + 1] = (has[i] + power * 1ll * (t[i] - '0' + 1)) % MOD;
        revhas[i + 1] = (revhas[i] + power * 1ll * (t[len-1-i] - '0' + 1)) % MOD;
        power = power * 1ll * B % MOD;
    }
}

unordered_set<int> se ;
unordered_map <int , PII> mp ;
VI id00 , id01 , id10 , id11 , idx ;

int check()
{
    int a = id01.size() ;
    int b = id10.size() ;
    int cc = 0 ;
    if (ABS(a-b) <=1) return cc ;
    if(a > b){
        for (auto i : id01){
            // wa2(a,b) ;
            if ( se.find(mp[i].yy) == se.end() ){
                a-- ,b++ ; 
                cc++ ;
                idx.push_back(i) ;
               if (ABS(a-b) <=1) return cc ;
            }
        }

    }
    else {
        for (auto i : id10){
            if ( se.find(mp[i].yy) == se.end() ){
                b--,a++ ;
                cc++ ;
                idx.push_back(i) ;
               if (ABS(a-b) <=1) return cc ;
            }
        }
    }

    return -1 ;
}






void _main_main()
{
    se.clear() ;
    mp.clear() ;
    id00.clear() ;
    id01.clear() ;
    id10.clear() ;
    id11.clear() ;
    idx.clear() ;


    ll n  ; cin >> n ; 
    vector<string> s(n) ;
    FORN(i,n){
        cin >> s[i] ;
        if (s[i].front() == '0' && s[i].back() =='0') id00.push_back(i) ;
        else if (s[i].front() == '1' && s[i].back() =='1') id11.push_back(i) ;
        else if (s[i].front() == '0' && s[i].back() =='1'){
            id01.push_back(i) ;
            gen(s[i]) ;
            mp[i] = {range(0,len-1) , invRange(0,len-1)} ;
            se.insert(range(0,len-1)) ;
            // wa2(s[i] , mp[i]) ;
        } 
        else if (s[i].front() == '1' && s[i].back() =='0'){
            id10.push_back(i) ;
            gen(s[i]) ;
            mp[i] = {range(0,len-1) , invRange(0,len-1)} ;
            se.insert(range(0,len-1)) ;
            // wa2(s[i] , mp[i]) ;
        } 
    }

    if (id00.size() && id11.size() && !id01.size() && !id10.size() ){
        cout << -1 << nl ;
        return ;
    }
    if (id00.size() && !id11.size() && !id01.size() && !id10.size() ){
        cout << 0 << nl << nl ;
        return ;
    }
    if (!id00.size() && id11.size() && !id01.size() && !id10.size() ){
        cout << 0 << nl << nl ;
        return ;
    }
    int res = check() ;
    if (res == 0) cout << res << nl << nl ;
    else if (res == -1) cout << -1 << nl ;
    else{
        cout << res << nl ;
        for (auto i : idx) cout << i+1 << " " ;
        cout << nl ;
    }

    // for (auto i : se) wa(i) ;
    






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
