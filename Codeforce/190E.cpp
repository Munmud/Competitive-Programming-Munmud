
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
const int N = 1e6+5 ;

set <int> se ;
vector <int> w[N] ;
int ind[N] ;
vector <VI> ans ;

void go(int n)
{
    VI v ;
    v.emplace_back(n) ;
    FORN(i,v.size()){
        int num = v[i] ;
        se.erase(num) ;
        for (auto j : w[num]) ind[j]++ ;
        if (i == v.size()-1)
        {
            int mem = v.size() ;
            for (auto k : se) if (ind[k] != mem) v.emplace_back(k) ;
        }
    }
    ans.emplace_back(v) ;
    for (auto i : v) for (auto j : w[i]) ind[j] = 0 ;
}


void _main_main()
{
    ll n , m  ;
    cin >> n >> m ;
    FORAB(i,1,n) se.insert(i) ;
    FORN(i,m)
    {
        int x,y ;
        cin >> x >> y ;
        w[x].emplace_back(y);
        w[y].emplace_back(x);
    }

    FORAB(i,1,n) if (se.find(i) != se.end()) go(i) ;

    cout << ans.size() << nl ;
    for (auto i : ans){
        cout << i.size() << " " ;
        for (auto j : i) cout << j << " " ;
        cout << nl ;
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
