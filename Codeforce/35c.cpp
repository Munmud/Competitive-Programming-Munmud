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

using namespace std;

int tree [2002] [2002] ;
int n , m , k, x , y ;
queue < PII > q;

void check (int a, int b){
    if (a<=n && a>=1 && b<=m && b>=1){
        if ( tree[a][b] == 0 ){
            tree [a] [b] = 1 ;
            q.push( { a , b } ) ;
        }
    }
}

int main ()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    hitAi ;


    //MEM ( tree , -1 ) ;

    cin >> n >> m ;

    cin >> k ;
    while ( k-- ) {
            cin >> x >> y ;
        q.push({x,y});
        tree[x][y]=1;
    }

    while (!q.empty()){
        x = q.front().xx ;
        y = q.front().yy ;

        check ( x + 1 , y );
        check ( x - 1 , y );
        check ( x , y + 1 );
        check ( x , y - 1 );

        q.pop();
    }

    cout << x << " " << y << endl;

}
