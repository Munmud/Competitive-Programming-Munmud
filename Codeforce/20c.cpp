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

vector<PII>g[100005];
int parent[100005];
void ans(int p)
{
    if(p==0)
        return;
    ans(parent[p]);
    cout << p << " " ;
}

ll dijkstra(int src,int n)
{
    int i,u,v,cost;
    priority_queue<PII,vector<PII>,greater<PII> >pq;
    vector<ll>dist(n+1,INT_MAX);
    dist[src]=0;
    parent[src]=0;
    pq.push({dist[src],src});
    while(!pq.empty())
    {
        PII f=pq.top();
        pq.pop();
        u=f.yy;
        for(i=0;i<g[u].size();i++)
        {
            v=g[u][i].yy;
            cost=g[u][i].xx;
            if(dist[u]+cost<dist[v])
            {
                dist[v]=dist[u]+cost;
                parent[v]=u;
                pq.push({dist[v],v});
            }
        }
    }
    return dist[n];
}

int main()
{
    int n,m,i,a,b,w;
    cin >> n >> m ;
    for(i=1;i<=m;i++)
    {
        cin >> a >> b >> w ;
        g[a].push_back({w,b});
        g[b].push_back({w,a});
    }
    ll x=dijkstra(1,n);
    if(x==INT_MAX)
    {
        printf("-1\n");
    }
    else
        ans(n);
}
