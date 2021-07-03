#include <bits/stdc++.h>

#define MEM(a, b)           memset(a, (b), sizeof(a))
#define CLR(a)              memset(a, 0, sizeof(a))
#define MAX(a, b)           ((a) > (b) ? (a) : (b))
#define MIN(a, b)           ((a) < (b) ? (a) : (b))
#define ABS(X)              ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X)                ( (X) * (X) )
#define SZ(V)               (int )V.size()
#define FORN(i, n)          for(int i = 0; i < n; i++)
#define FORAB(i, a, b)      for(int i = a; i <= b; i++)
#define ALL(V)              V.begin(), V.end()
#define IN(A, B, C)         ((B) <= (A) && (A) <= (C))
//#define AIN(A, B, C)        assert(IN(A, B, C))

#define watch2(x , y)       cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define watch(x)            cout << (#x) << " is " << (x) << endl
#define hitAi               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<Long long int, Long long int>
#define VI                  vector <int>

using namespace std;
ll s[10005] , a , b , c , d , e , f ;

ll fn( int n ) {
    //FORN(i,21){ watch(n);watch2(i,s[i]);}
    if (s[n]!=-1) return s[n];

    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    s[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))% 10000007;
    return s[n];
}

int main ()
{

    hitAi;
    ll  x , testCase , ans = 0 , sum = 0  , count = 0, n ;
    //freopen("E:/Desktop/Programming/Codeforce/input.txt", "r" , stdin );

    cin >>testCase ;
    while (testCase--)
    {
        cin >> a >> b >> c >> d >> e >> f >> n ;
        MEM(s,-1);
        cout << "Case " << ++count << ": " << fn(n)% 10000007 << endl;
    }
    //FORN(i,n+1){ watch2(i,s[i]);}



}
