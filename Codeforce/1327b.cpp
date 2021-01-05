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

    cin >> testCase ;
    FORAB(t,1,testCase)
    {
        ll ans;
        cin >> n ;
        //mn = INT_MAX ;
        set <ll> se;
        FORAB(i,1,n) se.insert(i);
        set <ll>::iterator it;
        vector <ll> v[n+1];
        FORN(i,n)
        {
            cin >> x;

            FORN(j,x)
            {
                ll p ;
                cin >> p ;
                v[i].push_back( p ) ;
            }
            //watch(v[i].size());

            sort(v[i].begin(),v[i].end());

            ll check = se.size();

            FORN(j,x){

                it = se.find( v[i][j] );

                //watch( v[i][j] );
                if (it != se.end()){
                    se.erase(it);
                    break;
                }
            }

            if (se.size()==check)
                ans = i+1;
            //watch(se.size());

        }
        if (se.size())
        {
            cout << "IMPROVE" << endl;
            it= se.begin();
            cout << ans << " " << *it << endl;
        }

        else cout << "OPTIMAL" << endl;
    }
}
