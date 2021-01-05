
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
    int n , x , testCase, ans=0, a, b=0, m, d ;

    cin >> n >> m >> d ;

    int s[n*m+1];

    cin >> x;
    s[0]=x;
    a=x%d;

    FORAB(i,1,n*m-1){

            cin >> x ;
            s[i] = x;
            if(x%d!=a)
                ans=1;

    }


    if (ans){
        cout << "-1" << endl;
        return 0 ;
    }
    sort(s,s+n*m);

    int mid = n*m/2 ;

    //watch(s[mid]);

    x = s[mid];

    FORN(i,n*m){

        b+=(ABS(x-s[i])/d);
    }

    cout << b << endl;


}

