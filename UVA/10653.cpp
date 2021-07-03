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
#define ALLR(V)              V.rbegin(), V.rend()
#define IN(A, B, C)         ((B) <= (A) && (A) <= (C))
//#define AIN(A, B, C)        assert(IN(A, B, C))

#define watch2(x , y)       cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define watch(x)            cout << (#x) << " is " << (x) << endl
#define hitAi               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);ios::sync_with_stdio(0)

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<long long int, long long int>
#define VI                  vector <int>


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
bool arr[1005][1005] ;
struct node
{
    ll x,  y,  d ;
    node(ll _x , ll _y , ll _d)
    {
        x = _x ;
        y = _y ;
        d = _d ;
    }
};

queue<node> qu;
ll n , m ;


void go (ll x , ll y , ll d )
{
    //if (x == 3) watch2(x,y) ;


    ll p ,q ;
    p = x ;
    q = y+1 ;

    if (  q <m )
    {
        if (arr[p][q] == true )
            qu.push({p,q,d+1}) ;
            arr[p][q] = false ;
    }



    p = x-1 ;
    q = y ;
     if ( p>=0  )
    {
        if (arr[p][q] == true )
            qu.push({p,q,d+1}) ;arr[p][q] = false ;
    }

    p = x ;
    q = y-1 ;
     if (  q>=0 )
    {
        if (arr[p][q] == true ) qu.push({p,q,d+1}) ;arr[p][q] = false ;
    }

    p = x+1 ;
    q = y ;
     if (  p<n )
    {
        if (arr[p][q] == true ) qu.push({p,q,d+1}) ;arr[p][q] = false ;
    }

}

int main ()
{   //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );

    hitAi;
    ll  x , testCase , y   ;

    while(1)
    {
        cin >> n >> m ; if (n==0 && m==0) break ; MEM(arr,true);
        cin >> testCase ; while(testCase--){
            ll row , num , col ; cin >> row >> num ;
            while(num--) {
                cin >> col ; arr[row][col] = false ;
            }
        }
        ll startx , starty , endx , endy, _x ,_y , _d ;
        cin >> startx >> starty >> endx >> endy ;
        while(qu.size()) qu.pop();
        qu.push({startx , starty , 0}) ;

        arr[startx][starty] = false ;



        while(qu.size())
        {
             _x = qu.front().x ;
             _y = qu.front().y ;
             _d = qu.front().d ;
            qu.pop() ;

            if (_x == endx && _y == endy) break ;

            go (_x , _y , _d );
        }
        cout << _d << endl ;

    }





}
