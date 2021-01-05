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
#define ALLR(V)              V.rbegin(), V.rend()
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
#define PLL                 pair<long long int, long long int>
#define VI                  vector <int>

using namespace std;

pair <ll , ll > pp [100005] ;

int main ()
{
    hitAi;
    ll n , x , testCase ;
    //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );
    ll d;

    cin >> n >> d ;
    FORN(i,n) cin >> pp[i].xx >> pp[i].yy ;

    sort(pp,pp+n) ;

    FORAB(i,1,n-1) pp[i].yy+=pp[i-1].yy ;
    ll TFact = 0 ;
    ll last = 0 ;
    FORN(i,n){
        while(last < n && pp[last].xx < pp[i].xx+d) last++ ;
        ll temp = pp[last - 1].yy ;
        if (i) temp -= pp[i-1].yy ;
        TFact = max(TFact , temp) ;
    }

    cout << TFact << endl;

}
