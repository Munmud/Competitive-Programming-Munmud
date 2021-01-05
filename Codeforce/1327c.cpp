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

int main ()
{
    hitAi;
    ll n , x , testCase ;
    //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );
    ll m , k ;

    cin >> n >> m >> k ;

    set <PII> se[k];
    vector <PII> suru , ses ;

    FORN(i,k)
    {
        ll a , b ;
        cin >> a >> b ;
        suru.push_back({a,b});
        se[i].insert({a,b});
    }

    FORN(i,k)
    {
        ll a, b ;
        cin >> a >> b ;
        ses.push_back({a,b});
    }
    string s;
    ll current x
    FORN(i,k)
    {
        ll x , y ;
        x = suru[i].xx -ses[i].xx ;
        y = suru[i].yy -ses[i].yy ;
        watch2(x,y);

        while(x<0){
            s+='D';
            x++ ;
        }
        while (x>0)
        {
            s+='U';
            x--;
        }
        while (y>0){
            s+='L';
            y--;
        }
        while (y<0){
            s+='R' ;
            y++;
        }
    }
}
