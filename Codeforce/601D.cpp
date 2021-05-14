
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
const int N = 300000+100 ;
const int B = 51 ;


ll val[N] ;
int ch[N] ;
bool vis[N] ;
vector <int> v[N] ;

VL  go(int node)
{
    vis[node] = 1 ;

    VL res ;

    for (auto i : v[node]){
        if (vis[i]) continue ;
        VL temp = go(i) ;
        for (auto j : temp) res.emplace_back(j) ;
    }
    sort(ALL(res)) ;
    res.resize( distance(res.begin(), unique ( res.begin(), res.end() ) ) );
    for (auto &i : res){
        i = (i*B) %MOD ;
    } 
    res.emplace_back(ch[node]) ;
    val[node] += res.size() ;
    return res ;

}

void _main_main()
{
    ll n  ;
    cin >> n ;
    FORAB(i,1,n) cin >> val[i] ;
    FORAB(i,1,n) {
        char c ; cin >> c ;
        ch[i] = c - 'a' + 1 ;
    }
    FORN(i,n-1){
        int x,y ;cin >> x >> y ;
        v[x].emplace_back(y) ;
        v[y].emplace_back(x) ;
    }

    VL  res = go(1) ;

    ll mx = -1 ;
    ll cc = 0 ;
    FORAB(i,1,n){
        if (mx < val[i]){
            mx = val[i] ;
            cc = 1 ;
        }
        else if (mx == val[i]) cc++ ;
    } 

    cout << mx << nl << cc << nl ;




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
