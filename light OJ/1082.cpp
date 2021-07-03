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

int arr[100002];
int tree[300002];

void init(int node , int b , int e)
{
    //watch2(b,e);
    if (b==e){
        tree[node] = arr[b];
        return ;
    }
    int left  =  node *2 ;
    int right  =  node *2 +1 ;
    int mid = (b+e)/2 ;
    init (left  , b ,mid );
    init (right , mid+1,e);
    //tree[node] = max( tree[left] , tree[right] ) ;
    tree[node] = min( tree[left] , tree[right] );
}

int query (int node  ,  int b , int e , int i , int  j )
{
    if (b>j || e<i) return INT_MAX;
    if (b>=i && e<=j) return tree[node];
    int left = node*2 ;
    int right  =  node * 2 +1 ;
    int mid  =  (b+e)/2 ;
    int p1 = query (left,b,mid,i,j);
    int p2 = query (right,mid+1,e,i,j);
    return min(p1,p2);
}

int main ()
{
    hitAi;
    ll n , x , testCase ;
    //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );
    cin >> testCase ;
    FORN(t,testCase)
    {
        ll q ;
        cin >> n >> q ;

        FORAB(i,1,n) cin >> arr[i] ;

        init(1,1,n);
        //cout << tree[1] << endl;
        cout << "Case " << t+1 << ":" << endl ;
        while(q--)
        {
            ll a ,  b ;
            cin >> a >> b ;
            cout << query(1,1,n,a,b) << endl;

        }
    }
}
