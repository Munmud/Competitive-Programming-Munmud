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

ll n , x , testCase ;

vector <ll> v[2050];

ll checker[1050][2050];


ll dp ( ll i,ll pos )
{
    //watch2(i,pos);

    if (checker[i][pos]!= -1 ) return checker[i][pos];
    //watch(v[i][pos]);

    ll a=0 , b=0;
    ll p1, p2;
    if (i+1<=2*n-1)
    {
        if (i<n)
        {
            p1=pos;
            p2=pos+1;
            a= dp(i+1,p1);
            b= dp(i+1,p2);
        }
        else
        {
            p1=pos;
            p2=pos-1;
            if (p1>=0 && p1<v[i+1].size())
                a = dp(i+1 , p1);
            if (p2>=0 && p2<v[i+1].size())
                b = dp(i+1, p2);
        }
    }
    checker[i][pos] = MAX(a,b) +v[i][pos];
    return checker[i][pos];



}


int main ()
{
    hitAi;


    freopen("E:/Desktop/Programming/input.txt", "r" , stdin );

    cin >> testCase ;
    FORN(t,testCase)
    {
        MEM(checker,-1);
        cin >> n ;

        FORAB(i ,1,n)
        {
            v[i].clear();
            FORAB(j,1,i)
            {
                cin >> x;
                v[i].pb(x);
            }
        }

        FORAB(i,n+1,2*n-1)
        {
            v[i].clear();
            //watch(i);
            //watch2(n+1 , 2*n-1);
            FORAB(j , 1 , (2*n)-i)
            {
                //watch2(j,2*n-i);
                //watch(x);
                cin >> x ;
                v[i].pb(x);
            }
        }

        /*FORAB(i,1,2*n-1)
        {
            //cout << i << " ";
            FORN(j,v[i].size())
            cout << v[i][j] <<" " ;
            cout << endl;
        }*/

        cout << "Case " << t+1 << ": ";
        cout << dp(1,0) << endl;
    }
}
