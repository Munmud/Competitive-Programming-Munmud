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
 struct edge
{
    ll u , v, w ;
    edge(ll _u , ll _v , ll _w)
    {
        u = _u ;
        v =_v ;
        w = _w ;
    }
    bool operator < (const edge &p) const
    {
        return w < p.w ;
    }
};
vector <edge> E ;
ll parent[1000005] ;
ll findme(ll n)
{
    return parent[n] = (parent[n]==n) ? n : findme(parent[n]) ;
}

ll mst (ll n)
{
    sort(ALL(E)) ;
    FORN(i,n+2) parent[i] = i ;

    ll cnt = 0 , sum = 0 ;

    for (auto i : E)
    {
        ll u = findme(i.u) ;
        ll v = findme(i.v) ;

        if (u!=v)
        {
            parent[u] = v ;
            cnt++ ;
            sum+=i.w ;

            if (cnt == n-1) break ;
        }
    }

    return sum ;
}



int main ()
{
   //freopen("E:/Programming/input.txt", "r" , stdin );

    hitAi;
    ll n , m  ;cin >> n >> m ;
    vector <PLL> v , check ;
    ll sum = 0 ;
    while (m--)
    {
        ll x , y ;cin >> x >> y ;
        v.push_back({x,y}) ;
        if (y == 1) sum+= x;
    }

    ll x = 1  , p = 1 , q = 2 , cnt = 0;
    for (auto i : v)
    {
        ll t = i.xx ;
        if (i.yy == 1){
            i.xx = x ;
            x++ ;
            i.yy = x;
        }
        else{
            q++ ;
            if (q >n){
                p++ ;
                q= p+2 ;
            }
            i.xx = p ;
            i.yy = q ;
        }
        E.push_back({i.xx , i.yy ,t}) ;
        check.push_back({i.xx , i.yy}) ;
    }

    ll res = mst(n) ;
    //watch2(sum , res) ;

    if (res!=sum) cout << -1 << endl ;
    else {
        for (auto i : check)
        cout << i.xx << " " << i.yy << endl ;
    }





}
