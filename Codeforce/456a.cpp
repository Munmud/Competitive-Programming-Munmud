#include <bits/stdc++.h>

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

#define PII                 pair<int, int>
#define PLL                 pair<Long long int, Long long int>
#define VI                  vector <int>

using namespace std;

int main ()
{
    hitAi;

    int n, x, y, ans=1, tem=INT_MIN ;

    cin >> n;

    vector <PII> v;
    //vector <PII>::iterator it;

    FORN(i,n) {
        cin >> x >> y;
        v.push_back( {x,y} );
    }

    sort(ALL(v));

    FORN(i,n) {
        if (v[i].yy >= tem){
            tem=v[i].yy;
        }
        else {
            ans =0;
            break;
        }
    }
    if (ans) cout << "Poor Alex" << endl ;
    else cout << "Happy Alex" << endl ;


}
