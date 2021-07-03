
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
const int N = 3e5+100 ;

ll hh(ll  a, ll  b){
    return MIN(a,b)*( (ll)1e7) + MAX(a,b) ;
}

int cnt[N] ;
unordered_set<ll> se ;

bool check1(vector <int> & v , int sz)
{
    for (auto i : v) if (cnt[i] != sz) return false ;
    return true ;
}

bool check2(vector <int> &v){
    int n = v.size() ;
    for (int i = 0 ; i<n ; i++){
        for (int j = i+1 ; j<n ; j++){
            if (se.find(hh(v[i],v[j])) != se.end()) return false ;
        }
    }
    return true ;
}

void _main_main()
{
    ll n ,m , x,y  ;
    cin >> n >> m ;

    while(m--){
        cin >> x >> y ;
        se.insert(hh(x,y)) ;
        cnt[x]++ ;
        cnt[y]++ ;
    }
    vector <int> v1,v2,v3, v4 ;
    v1.push_back(1) ;

    FORAB(i,2,n){
        if (se.find(hh(1ll,i)) !=se.end()) v2.push_back(i) ;
        else v1.push_back(i) ;
    } 

    if (v2.size() <2){
        cout << -1 << nl ;
        return ;
    }

    for (auto i : v2){
        if (se.find(hh(i,v2[0])) != se.end()){
            v4.emplace_back(i) ;
        }
        else v3.emplace_back(i) ;
    }

    // cout << v1 << nl ;
    // // cout << v2 << nl ;
    // cout << v3 << nl ;
    // cout << v4 << nl ;

    if (v3.empty()) {
        cout << -1 << nl ;
        return ;
    }
    if (v4.empty()) {
        cout << -1 << nl ;
        return ;
    }

    if (!check1(v1 , v3.size() + v4.size())){
        cout << -1 << nl ;
        return ;
    }
    if (!check1(v3 , v1.size() + v4.size())){
        cout << -1 << nl ;
        return ;
    }
    if (!check1(v4 , v1.size() + v3.size())){
        cout << -1 << nl ;
        return ;
    }

    vector <PII> pp ;
    pp.push_back({v1.size() , 1}) ;
    pp.push_back({v3.size() , 3}) ;
    pp.push_back({v4.size() , 4}) ;
    sort(ALL(pp)) ;

    for (int i = 0 ; i<2 ; i++)
    {
        if (pp[i].yy == 1) {
            if( !check2(v1) ){
                cout << -1 << nl ;
                return ;
            }
        }
        if (pp[i].yy == 3) {
            if( !check2(v3) ){
                cout << -1 << nl ;
                return ;
            }
        }
        if (pp[i].yy == 4) {
            if( !check2(v4) ){
                cout << -1 << nl ;
                return ;
            }
        }
    }


    ll ans[n+5] ;

    for (auto i : v1) ans[i] = 1 ;
    for (auto i : v3) ans[i] = 2 ;
    for (auto i : v4) ans[i] = 3 ;

    FORAB(i,1,n) cout << ans[i] << " " ;


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
