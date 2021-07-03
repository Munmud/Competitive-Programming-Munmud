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

int n , x , k , q , testCase ;
int tree[200005*3] ;

void update(int node , int b , int e , int i , int j)
{
    if (b>j || e<i) return ;
    if (b>=i && e<=j) {
        tree[node]++ ;
        return;
    }
    int left = node *2 ;
    int right = node *2 +1 ;
    int mid = (b+e) /2 ;

    update(left  ,b , mid , i , j  );
    update(right,mid+1 ,e , i , j );
}

void query(int node , int b , int e  , int carry)
{
    //if (b>j || e<i) return ;
    if (b==e) {
        tree[node] += carry;
        if (tree[node]>=k)
            tree[node]=1;
        else tree[node ]= 0 ;
        return ;
    }

    int left = node *2 ;
    int right = node *2 +1 ;
    int mid = (b+e) /2 ;

     query(left,b,mid , tree[node]+carry);
     query(right,mid+1 ,e  , tree[node]+carry);

    tree[node] = tree[left] + tree[right]  ;
}

int sum(int node , int b , int e , int i , int j)
{
    if (b>j || e<i) return 0 ;
    if (b>=i && e<=j) {
        return tree[node];
    }
    int left = node *2 ;
    int right = node *2 +1 ;
    int mid = (b+e) /2 ;

    int p1 = sum(left  ,b , mid , i , j  );
    int p2 = sum(right,mid+1 ,e , i , j );

    return p1 + p2 ;
}


int main ()
{
    //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );

    hitAi;


    cin >> n >> k >> q;


    int a , b ;
    FORAB(i,1,n)
    {

        cin >> a >> b ;
        update(1,1,200000,a,b);
    }

    query(1,1,200000 ,0);


    FORN(i,q)
    {
        cin >> a >> b ;

        cout << sum(1,1,200000,a,b) << endl;

    }






}
