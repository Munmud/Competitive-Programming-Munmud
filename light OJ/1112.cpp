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
#define All(V)              V.begin(), V.end()
#define AlR(V)              V.rbegin(), V.rend()
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
int arr[100001];
int tree [100002*3];

void init(int node ,int b ,int e)
{
    if (b==e){
        tree[node] = arr[b];
        return;
    }
    int left =  node<< 1;
    int right = (node <<1 ) +1 ;
    int mid = (b+e)>>1 ;

    init(left ,b,mid);
    init(right ,mid+1 , e);

    tree[node] = tree[left]+tree[right];
}
void update(int node ,int b , int e , int i, int value)
{
    if (i<b || i>e) return;
    if (b==i && i==e) {
        tree[node] += value ;
        return;
    }
    int left =  node<< 1;
    int right = (node <<1 ) +1 ;
    int mid = (b+e)>>1 ;

    update( left  ,  b   , mid , i , value ) ;
    update( right ,mid+1 , e   , i , value ) ;
    tree[node] = tree[left]+tree[right];
}
void zero(int node ,int b , int e , int i)
{
    if (i<b || i>e) return;
    if (b==i && i==e) {
        tree[node] = 0 ;
        return;
    }
    int left =  node<< 1;
    int right = (node <<1 ) +1 ;
    int mid = (b+e)>>1 ;

    zero(left ,b,mid,i);
    zero(right ,mid+1 , e,i);
    tree[node] = tree[left]+tree[right];
}

int query (int node , int b , int e , int i , int j )
{
    if (i>e || j<b) return 0;
    if (b>=i && e<=j) return tree[node];

    int left =  node<< 1;
    int right = (node <<1 ) +1 ;
    int mid = (b+e)>>1 ;

    int p1=query(left ,b, mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return p1+p2;
}

int main ()
{
    hitAi;
    int n , x , testCase ;
    freopen("E:/Desktop/Programming/input.txt", "r" , stdin );
    cin >> testCase ;
    FORN(t,testCase)
    {
        int q;
        cin >> n >> q ;

        FORAB(i,1,n) cin >> arr[i] ;

        init(1,1,n);

        cout << "Case " << t+1 << ":" << endl ;
        while (q--)
        {
            cin >> x ;
            if (x == 1)
            {
                int index;
                cin >> index ;
                cout << arr[index+1] <<endl;
                zero(1,1,n,index+1);

            }
            else if (x == 2)
            {
                int index , money;
                cin >> index >> money ;
                update(1,1,n,index+1,money);

            }
            else if (x == 3)
            {
                int a , b;
                cin >> a >> b ;
                cout << query(1,1,n,a+1 ,b+1) << endl;

            }
        }
    }
}
