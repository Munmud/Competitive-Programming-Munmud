
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

int arr[11];
int main ()
{
    hitAi;

    ll n , x , testCase, ans=0,a=0,b=0,c=0 ;

    cin >> testCase ;

    while (testCase--)
    {
        cin >> x ;
        n=x;

            a=n/2;
            if (a>998244353  )
                a=998244353  ;
            n-=a*2;
            b=n;
            if (b>a)
                b=a;
                a-=b;
                n-=b;
                c=n%3;
                b-=c;
            //watch2(a,b);
            while (c--) cout << "9";
            while(b--) cout << "7";
            while (a--) cout << "1";
            cout << endl;



    }
}
