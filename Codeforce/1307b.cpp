
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
#define PLL                 pair<long long int, long long int>
#define VI                  vector <int>

using namespace std;

    VI v;
    ll n , x , testCase , ans = 0 , sum = 0 , a , b , c , count = 0 ;


    ll check(ll i,ll sum){
        watch2(v[i],sum);
        if (sum==0)return 0;
        if (v[i]>sum) return check(i-1,sum);
        ll temp = v[i];
        if (sum%v[i]==0) return sum/v[i];
        else {
            ll have = x/v[i];
            while (have--){
                ll remain = x % v[i] ;
                ll index = i-1;
                if (index<0)return 0;
                return have+check(i-1,remain);
            }
        }

    }

int main ()
{
    hitAi;

    //freopen("E:/Desktop/Programming/Codeforce/input.txt", "r" , stdin );

    cin >> testCase;




    while (testCase--){
        v.clear();
        cin >> n >> x;
        FORN(i,n){
            ll t;
            cin >> t;
            v.pb(t);
        }
        sort(ALL(v));
        watch(v[n-1]);

        cout << check(n-1,x);


    }
}
