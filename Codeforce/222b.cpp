
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
    int n , x , m,  testCase , k , y ;
    //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );


    char ch ;
    int r[1005],c[1005];

    scanf("%d %d %d",&n,&m,&k);
    int arr[n+1][m+1];


    FORAB(i,1,n)
        FORAB(j,1,m)
            scanf("%d",&arr[i][j]);


    FORAB(i,1,n) r[i]=i;
    FORAB(i,1,m) c[i]=i;

    while (k--)
    {

        scanf(" %c",&ch);
        scanf("%d %d",&x,&y);
        if (ch == 'c')
            swap(c[x],c[y]);

        else if (ch=='r')
            swap(r[x],r[y]);

        else
            printf("%d\n", arr[ r[x] ][ c[y] ] );

    }
}
