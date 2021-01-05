
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
#define hitAi               ios_base::sync_with_stdio(false)

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<Long long int, Long long int>
#define VI                  vector <int>

using namespace std;


int main ()
{
    hitAi;
    ll n , x , testCase , ans=0 , sum = 0 , a , b , c , count=0, s[100005],minV=INT_MAX,maxV=INT_MIN ;
    //freopen("E:/Desktop/Programming/Codeforce/input.txt", "r" , stdin );

    vector<ll> v;
    vector<ll> ::iterator it,ifront,iback,ibegin,ises;

    cin >> n ;

    v.pb(INT_MIN);

    FORN(i,n){
        cin >> x ;
        s[i]=x;
        v.pb(x);
        if (minV>x)
            minV=x;
        if (maxV<x)
            maxV=x;
    }
    v.pb(INT_MAX);

    //watch(minV);
    //watch(maxV);
    //v.pb(INT_MAX);
    sort(ALL(v));

    //FORN(i,n) watch(s[i]);
    ibegin =lower_bound(v.begin(),v.end(),minV);
    ises = lower_bound(v.begin(),v.end(),maxV);

    //watch2(*ibegin,*ises);

    FORN(i,n){
        x=s[i];
        it = lower_bound(v.begin(),v.end(),x); //watch(*it);
        ifront=it;
        ifront++;//watch(*ifront);
        iback = it;
        iback--;// watch(*iback);

        if (*iback == INT_MIN){
            iback=ibegin;
            iback++;
        }

        if (*ifront == INT_MAX){
            ifront = ises;
            ifront--;
        }



        ans = MIN( ABS(*it-*ifront) , ABS(*it-*iback) );
        cout << ans << " " ;
        ans = MAX( ABS (*it-*ibegin) , ABS(*it-*ises) );
        cout << ans << endl;


    }
}
