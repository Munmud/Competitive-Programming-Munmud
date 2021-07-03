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
#define VLL                 vector <long long int>

using namespace std;

VLL s;



int main ()
{
    hitAi;
    ll n , x , testCase , ans = 0 , sum = 0 , a , b , c , count = 0 ;
    //freopen("E:/Desktop/Programming/Codeforce/input.txt", "r" , stdin );
    cin >> testCase;
    for (scanf("%d",&_);_;_--)
    {
        s.clear();
        cin >> n ;
        ll max = 0;
        ll min = LONG_MAX;
        ll mCount = 0;
        ll maxDiff =0;

        cin >> x;

        s.pb(x);
        if (x>=0){
                if (max<x)
                    max=x;
                if (min>x)
                    min=x;
        }
        else mCount++;

        FORAB(i,1,n-1){
                cin >> x;
                s.pb(x);



            if (x>=0){
                if (max<x)
                    max=x;
                if (min>x)
                    min=x;
                if (s[i-1]>=0){
                    ll temp = ABS( s[i-1] - x );
                    if (temp > maxDiff )
                        maxDiff = temp ;
                }
            }
            else mCount++;
        }
        //watch2( min , max );

        if (max == 0 && min == LONG_MAX)
        {
            max=0 ;
            min = 0 ;
        }

        ll mid = (max+min)/2;

        //watch( mid );

        ans = MAX( ABS(max-mid) , ABS(mid-min) ) ;

        //watch2 ( ans , maxDiff );

        if (mCount)
            cout << ( maxDiff>ans ? maxDiff : ans ) << " " << mid << endl;
        else cout << maxDiff << " " << mid << endl;
    }
}
