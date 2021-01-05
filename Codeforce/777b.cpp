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

    string s,m , m2 ;

    vector<ll>v;

    cin >> s >> m ;

    m2 = m ;

    set<ll> available ,se ;
    set<ll> ::iterator it;
    ll arr[10],arr2[10];
    MEM(arr,0);
    MEM(arr2,0);

    FORN(i,n)
    {
        x = (int)m[i]-'0';
        available.insert(x);
        se.insert(x) ;
        arr[x]++;
        arr2[x]++;
    }

    FORN(i,n)
    {
        x = (int)s[i]-'0';
        v.pb(x);
    }

    sort(ALL(v));

    //watch(available.size());

    ll mx = 0 , mn = 0 ;

    FORN(i,n)
    {
        x = v[i];


        it = available.upper_bound(x);
        //watch(*it);
        if (it!=available.end())
        {
            mx++;
        }
        else {
            it = available.lower_bound(x);
            if (it==available.end())
            {
                it = available.begin();
            }
        }
        //watch2(x,*it);
        //watch(mx);
        arr[*it]--;
            if (arr[*it]==0)
                available.erase(it);

        it = se . lower_bound(x);

        //
        if (it==se.end()){
            mn++;
            it=se.begin();
        }
        arr2[*it]--;
            if (arr2[*it]==0)
                se.erase(it);
    }

    cout << mn << endl << mx << endl;
}
