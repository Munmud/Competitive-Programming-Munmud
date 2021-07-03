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


/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

/*-----------------------Bitmask------------------*/
//int Set(int N,int pos){return N=N | (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}
/*------------------------------------------------*/

using namespace std;
int cost[1005],weight[1005], n , dp[1005][40] , cap;

int fucn(int i , int w )
{
    if (i == n) return 0;

    if (dp[i][w] !=-1 ) return dp[i][w] ;

    int p1,p2 ;

    if (w+weight[i]<=cap)
        p1 = cost[i] + fucn(i+1,w+weight[i]);
    else p1 = 0 ;

    p2 = fucn(i+1,w ) ;

    return dp[i][w] = MAX( p1 , p2 );
}

int main ()
{
   freopen("E:/Desktop/Programming/input.txt", "r" , stdin );

    hitAi;
    int  x , testCase ;

    cin >> testCase ;

    FORN(t,testCase)
    {
        int sum = 0, g;

        cin >>n ;

        FORN(i,n) cin >> cost[i] >> weight[i] ;

        cin >> g ;
        FORN(i,g)
        {
            MEM(dp , -1 );
            cin >> cap ;
            sum+=fucn(0,0);
        }

        cout << sum << endl;
    }




}
