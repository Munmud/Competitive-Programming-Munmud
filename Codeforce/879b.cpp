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

    ll arr[n+1];
    MEM(arr,0);

    ll mx = LONG_LONG_MIN;
    queue<ll>q ;
    FORN(i,n)
    {
        cin >> x;
        q.push(x);
        mx = MAX(mx ,x);

    }
   // watch(mx);
    ll winner = q.front();
    q.pop();
    while (1)
    {
        x = q.front() ;
        q.pop();
        ll y = winner ;
        winner = MAX(y,x);
        ll looser = MIN (y,x);

        if (winner==mx)
            break;

        arr[winner]++;
        q.push(looser);
        if (arr[winner]==k)
            break;
    }
    cout << winner << endl ;


}