/*
                     Moontasir Mahmood
          Information and Communication Engineering
                  University of Rajshahi
*/
#include <bits/stdc++.h>

#define MEM(a, b)           memset ( a, (b), sizeof(a) )
#define CLR(a)              memset(a, 0, sizeof(a))
#define MAX(a, b)           ((a) > (b) ? (a) : (b))
#define MIN(a, b)           ((a) < (b) ? (a) : (b))
#define ABS(X)              ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X)                ( (X) * (X) )
#define SZ(V)               (int )V.size()
#define FORN(i, n)          for(int i = 0; i < n; i++)
#define FORAB(i, a, b)      for(int i = a; i <= b; i++)
#define ALL(V)              V.begin(), V.end()
#define ALLR(V)             V.rbegin(), V.rend()
#define IN(A, B, C)         ((B) <= (A) && (A) <= (C))
//#define AIN(A, B, C)        assert(IN(A, B, C))

#define wa2(x , y)          cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define wa(x)               cout << (#x) << " is " << (x) << endl
#define hitAi               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);ios::sync_with_stdio(0)

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<long long int, long long int>
#define VI                  vector <int>
#define BOUNDARY(i, j)      ((i >= 0 && i < row) && (j >= 0 && j < column))
#define max3(x, y, z)       MAX(MAX(x, y), MAX(y, z))



//cout << fixed << setprecision(20) << p << endl;

template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

template<typename T>
T nCr(T n, T r) {
    if(r > n - r) r = n - r;
    int  ans = 1,i;
    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }
	return ans;
}


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

#define SIZE                5005
#define MOD                 20071027
using namespace std;

const int N = 5e5+1 ;

ll n ,x ,a[N] , psum[N] ;

ll segTree[N*4] ;
ll lazy[N*4] ;

void setLazy(int ptr , int l , int r)
{
    ll val = lazy[ptr] ;
    lazy[ptr] = 0 ;
    segTree[ptr] += val ;
    if (l!=r)
    {
        lazy[ptr*2] += val ;
        lazy[ptr*2+1] += val ;
    }
}

ll getVal(int ptr , int l , int r , int i , int j)
{
    if(lazy[ptr]) setLazy(ptr,l,r) ;
    if(l>j || r<i) return LLONG_MIN ;
    if (i <=l && r<=j) return segTree[ptr] ;
    return max(
               getVal(ptr*2 , l , (l+r)/2 , i , j) ,
               getVal(ptr*2+1,(l+r)/2 +1 , r , i , j)
               ) ;
}

void update (int ptr , int l , int r , int i , int j , ll val)
{
    if (lazy[ptr]) setLazy(ptr,l,r) ;
    if (l>j || r<i) return ;
    if (i<=l && r<=j)
    {
        segTree[ptr] +=val ;
        if (l!=r)
        {
            lazy [ ptr * 2] += val ;
            lazy [ptr*2+1] += val ;
        }
        return ;
    }
    update(ptr*2 , l , (l+r)/2 , i , j , val) ;
    update(ptr*2+1 , (l+r)/2+1 , r , i , j , val ) ;

    segTree[ptr] = max(segTree[ptr*2] , segTree[ptr*2+1]) ;
}

int main ()
{
   //freopen("E:/Programming/input.txt", "r" , stdin );

    hitAi;
    cout << N << endl ;

    cin >> n ;
    ll m = (n+1) /2 ;
    for (int i = 1 ; i<=m ; i++)
    {
        cin >> a[i] ;
        psum[i] = psum[i-1] + a[i] ;
    }
    cin >> x ;
    ll sum = psum[m] + x * (n/2) ;

    FORN(i,m) update(1,0,m,i,i,psum[i]);
    for(int i = 0 ; i<= n/2 ; i++)
    {
        update(1,0,m,i,i,-sum) ;
        update(1,0,m,0,i-1,x) ;
        ll res = getVal(1,0,m,0,i)
        if (res <0)
        {
            cout << n-i ;
            return 0 ;
        }
    }
    cout <<-1 ;



}
