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

    cin >> n ;
    vector <ll> v;
    vector <ll> :: iterator suru,ses;

    FORN(i,n)
    {
        cin >> x ;
        v.pb(x);
    }
    ll sum1 =0 , sum2 =0 , sum3 = 0 , ans=0;


    suru = v.begin() ;
    ses = v.end();
    ses--;
    sum1+=*suru;
    sum2+=*ses;

    while(suru<ses)
    {
        //watch2(*suru,*ses);
        //watch2(sum1,sum2);

        if (sum1 == sum2)
        {
            ans = max( ans , sum1 );
            suru++;
            ses--;
            sum1+=*suru;
            sum2+=*ses;
        }
        else if (sum1<sum2){
            suru++;
            sum1+=*suru;
        }
        else if (sum1>sum2){
            ses--;
            sum2+=*ses;
        }
    }
    cout << ans << endl;

}
