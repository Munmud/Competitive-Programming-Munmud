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
const int N = 5050 ;

void go(ll a , ll b)
{
    if (a == b){

    }
    ll p ,q , r ;
    p= a*(b-1ll) ;
    q = a*b ;
    r = a*(2ll*b-1ll) ;
    // cout << a*(b-1ll) << " " << a*b << " " << a*(2ll*b-1ll) << nl ;
    int cc1 = 0 , cc2 = 0 ;
    if (p %a == 0) cc1++ ;
    if (q %a == 0) cc1++ ;
    if (r %a == 0) cc1++ ;
    if (p %b == 0) cc2++ ;
    if (q %b == 0) cc2++ ;
    if (r %b == 0) cc2++ ;

    bool flag = true ;


    if ( !(cc1 == 3 && cc2 ==1) ){
    cout << a << " " << b << " " ;
        cout << "Counting problem" << nl ;
        flag = false ;
    }
    if ( p == q || q == r || p ==r){
    cout << a << " " << b << " " ;
        cout << "Equal found" << nl ;
        flag = false ;
    }
    if (p+q != r){
    cout << a << " " << b << " " ;
        cout << "sum not right" << nl ;
        flag = false ;
    }
    // if (flag) cout << "ok "<< nl ;
}


void _main_main()
{
    ll n  ;
    ll a, b ;

    cin >> a >> b ;
    // if (a==b){
    //     cout << "NO" << nl ;
    //     return ;
    // }
    if (b == 1){
        cout << "NO" << nl ;
        return ;
    }
    // if (a >= b && a%b==0){
    //     cout << "NO" << nl ;
    //     return ;
    // }
    cout << "YES" << nl ;

    ll p=a ,q=a , r=a ;
    p *= b-1 ;
    q *= b ;    
    r *= 2*b-1 ;

    cout << p << " " << q << " " << r << nl ;

    // FORAB(a,1,100){
    //     FORAB(b,1,100){
    //             if (a==b){
    //                 cout << "NO" << nl ;
    //                 continue ;
    //             }
    //             if (b == 1){
    //                 cout << "NO" << nl ;
    //                 continue ;
    //             }
    //             if (a > b && a%b==0){
    //                 cout << "NO" << nl ;
    //                 continue ;
    //             }
    //         go(a,b) ;
    //     } 
    // } 


    

    
}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}
