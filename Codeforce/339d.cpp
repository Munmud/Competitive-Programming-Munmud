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
ll arr[132000];
ll tree[132000*3];

void init(int node , int b ,int e, int i)
{
    if (b==e) {
        tree[node]=arr[b];
        return;
    }
    int left = node *2 ;
    int right = (node *2) + 1 ;
    int mid = (b+e) / 2 ;

    init(left,b,mid,i+1);
    init(right,mid+1,e,i+1);

    //tree[node] = tree[left] + tree[right];

    if (i%2==0)
        tree[node] = tree[left] ^ tree[right];
    else tree[node] = tree[left] | tree[right];
}

void initUpdate(int node , int b ,int e, int i, int index ,ll value)
{
    if (b==index && e==index) {
        tree[node]=value;
        return;
    }
    if (b>index || e < index) return;

    int left = node *2 ;
    int right = (node *2) + 1 ;
    int mid = (b+e) / 2 ;

    initUpdate(left,b,mid,i+1,index,value);
    initUpdate(right,mid+1,e,i+1,index,value);

    //tree[node] = tree[left] + tree[right];

    if (i%2==0)
        tree[node] = tree[left] ^ tree[right];
    else tree[node] = tree[left] | tree[right];
}

void create(int node , int b ,int e, int i)
{
    if (b==e) {
        tree[node]=arr[b];
        return;
    }
    int left = node *2 ;
    int right = (node *2) + 1 ;
    int mid = (b+e) / 2 ;

    create(left,b,mid,i+1);
    create(right,mid+1,e,i+1);

    //tree[node] = tree[left] + tree[right];

    if (i%2!=0)
        tree[node] = tree[left] ^ tree[right];
    else tree[node] = tree[left] | tree[right];
}

void createUpdate(int node , int b ,int e, int i,int index,ll value)
{
    if (b==e && b==index) {
        tree[node]=value;
        return;
    }
    if (b>index || e < index) return;

    int left = node *2 ;
    int right = (node *2) + 1 ;
    int mid = (b+e) / 2 ;

    createUpdate(left,b,mid,i+1,index,value);
    createUpdate(right,mid+1,e,i+1,index,value);

    //tree[node] = tree[left] + tree[right];

    if (i%2!=0)
        tree[node] = tree[left] ^ tree[right];
    else tree[node] = tree[left] | tree[right];
}

int main ()
{
    hitAi;
    ll n , x , testCase ;
    //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );

    ll q;
    cin >> n >> q ;
    ll limit = pow(2,n);
    //watch(limit);

    FORN(i,limit) cin >> arr[i+1];

    if (n%2==0)
    {
        init(1,1,limit,0);
        //watch(tree[1]);
        while(q--)
        {
            ll index ;
            cin >> index >> x ;
            initUpdate(1,1,limit,0,index,x);
            cout << tree[1] << endl;
        }
    }

    else{
            create(1,1,limit,0);
            //watch(tree[1]);
            while(q--)
        {
            ll index ;
            cin >> index >> x ;
            createUpdate(1,1,limit,0,index,x);
            cout << tree[1] << endl;
        }
    }
}
