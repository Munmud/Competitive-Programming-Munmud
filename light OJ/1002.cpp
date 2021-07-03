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
    int u , v , w ;
    edge() ;
    edge (int _u , int _v , int _w)
    {
        u = _u ;v = _v ;w = _w ;
    }
    bool operator < (const edge &p) const{
        return w<p.w ;
    }
};

int parent[510] ;
int fnd(int n)
{
    if ( parent[n] == n ) return n ;
    return parent[n] = fnd(parent[n]) ;
}

vector <PII> mst[510] ;
bool visit[510] ;
int ans ;

void dist (int st, int ed , int d)
{
    if (st == ed)
    {
        ans = d ;
        return ;
    }
    else if (visit[st]) return ;
    visit[st] = true ;

    for (auto i : mst[st])
    {
        dist(i.xx,ed,MAX(d,i.yy)) ;
    }
}




int main ()
{
   //freopen("E:/Programming/input.txt", "r" , stdin );

    hitAi; int testCase ;
    cin >> testCase ;
    FORAB(t,1,testCase)
    {
        int n,m ; cin >> n >> m ;
        vector <edge> E ;
        while(m--)
        {
            int u , v , w ;
            cin >> u >> v >> w ;
            E.push_back(edge(u,v,w)) ;
        }
        FORN(i,n+5) {
            parent[i] = i ;
            mst[i].clear() ;
        }
        sort(E.begin() , E.end()) ;

        for (auto i : E)
        {
            int u = fnd(i.u) ;
            int v = fnd(i.v) ;

            if (u!=v)
            {
                parent[u] = v ;
                mst[i.u].push_back({i.v,i.w}) ;
                mst[i.v].push_back({i.u,i.w}) ;
            }
        }
        int ed ; cin >> ed ;

        cout << "Case " << t << ":" << endl;

        FORN(i,n)
        {
            ans = -1 ;
            MEM(visit , false) ;

            if (i == ed) ans = 0 ;
            else{
                dist(i,ed,-1) ;
            }
            if (ans == -1) cout << "Impossible" << endl ;
            else cout << ans << endl ;
        }



    }





}

