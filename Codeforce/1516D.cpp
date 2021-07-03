
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
const int N = 1e5 ;

VI p[N+5]  ;
int nex[N+5] , dp[20][N+5] ;



void _main_main()
{
    ll n , q ; cin >> n >> q ;
    VI arr(n) ; for (auto & i : arr) cin >> i ;

    FORAB(i,2,N)
    {
        if (p[i].empty()){
            nex[i] = n+1 ;
            for (int j = i ; j<=N ; j+= i) p[j].emplace_back(i) ;
        }
    }

    dp[0][n+1] = n+1 ;

    for (int i = n ; i>0 ; i--){
        dp[0][i] = dp[0][i+1] ;
        for (auto &j : p[arr[i-1]]){
            dp[0][i] = MIN(dp[0][i] , nex[j]) ;
            nex[j] = i ;
        }
    }

    FORAB(i,1,19) FORAB(j,1,n+1) dp[i][j] = dp[i-1][dp[i-1][j]] ;

    while (q--){
        int l , r, ans = 0 ;
        cin >> l >> r ;
        for (int i = 19 ; i>=0 ; i--){
            if (dp[i][l]<=r){
                ans+= (1<<i) ;
                l = dp[i][l] ;
            }
        }
        cout << ans+1 << nl ;
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
