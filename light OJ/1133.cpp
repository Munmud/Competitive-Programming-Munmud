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
    ll  x , testCase , ans = 0 , sum = 0 , a , b , c , count = 0 ;
    //freopen("E:/Desktop/Programming/Codeforce/input.txt", "r" , stdin );

    cin >> testCase;

    FORN(t,testCase)
    {
        cout << "Case " <<t+1 << ":" <<endl;
        ll n , m;
        cin >> n >> m ;
        VI v;
        FORN(i,n)
        {
            cin >> x;
            v.pb(x);
        }

        ll r = 0;

        while (m--)
        {
            char ch;
            cin >> ch;

            if (ch == 'P')
            {
                cin >> a >>  b;
                ll temp = v[a];
                v[a] = v [b];
                v[b] = temp;
            }
            else if (ch == 'S')
            {
                cin >> x ;
                FORN(i,n) v[i]+=x;
            }
            else if (ch == 'M')
            {
                cin >> x;
                FORN(i,n) v[i]*=x;
            }
            else if (ch == 'D')
            {
                cin >> x;
                FORN(i,n) v[i]/=x;
            }
            else if ( ch == 'R')
            {
               ll mid = (n%2!=0? n/2+1 : n/2);
               FORN(i,mid)
               {
                   swap( v[i] , v[n-i-1] );
               }
            }
        }

            for ( int i = 0 ; i <n-1 ; i++)
                cout << v[i] << " ";
            cout << v[n-1] << endl;

    }
}
