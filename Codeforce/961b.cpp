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
    ll k ;

    cin >> n >> k ;

    vector <ll> v ;
    vector <ll> ghum;

    FORN(i,n)
    {
        cin >> x ;
        v.pb(x);
    }
    FORN(i,n)
    {
        cin >> x ;
        ghum.pb(x );
    }

    ll j=0 , sum = 0 , mx = 0 , temp = 0;
    for (j = 0 ; j <k-1 ; j++)
    {
        if ( ghum[j] == 1 )
            sum+=v[j];
        else temp+=v[j];
    }
    //watch2(sum , temp ) ;
    ll i = 0;
    j = k-1 ;

    while (j<=n-1)
    {
        //watch2(v[i],v[j]);
        if ( ghum[j] == 1 )
            sum+=v[j];
        else temp+=v[j];

        mx = MAX(mx , temp);

        if (ghum[i]==0)
            temp-=v[i];
        i++;
        j++;
    }

    cout << sum+mx << endl ;


}
