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
    edge(int _u , int _v , int _w)
    {
        u = _u ;
        v = _v ;
        w = _w ;
    }

    bool operator < (const edge &p) const
    {
        return w < p.w ;
    }
};
vector <edge> v ;
vector <int> takenEdge ;
int parent[110] ;
void makeset(int n)
{
    FORN(i,n) parent[i] = i ;
}

int findset(int n)
{
    if (parent[n] == n) return n ;
    return parent[n] = findset(parent[n]) ;
}

int krushkal (int n)
{
    sort(v.begin() , v.end()) ;
    makeset(n+2) ;
    int cnt = 0 , sum = 0 , p= 0 ; ;

    for (auto i : v)
    {
        int u = findset(i.u) ;
        int v = findset(i.v) ;

        if (u!=v)
        {
            parent[u] = v ;
            cnt++ ;
            sum+= i.w ;
            takenEdge.pb(p) ;

            if (cnt == n-1) break ;
        }
        p++ ;
    }
    if (cnt == n-1) return sum ;
    return -1 ;
}

int main ()
{
   //freopen("E:/Programming/input.txt", "r" , stdin );

    hitAi;
    int testCase ; cin >> testCase ;
    FORAB(t,1,testCase)
    {
        int n , m ; cin >> n >> m ;
        v.clear() ;takenEdge.clear() ;

        FORN(i,m)
        {
            int u , p , w ; cin >> u >> p >> w ;
            v.push_back(edge(u,p,w)) ;
        }

        cout << "Case #" << t << " : " ;
        int res = krushkal(n) ;
        if (res == -1){
            cout << "No way" << endl ;
            continue ;
        }
        int miin = INT_MAX ;

        FORN(j , takenEdge.size())
        {
            int sum = 0 , cnt = 0  ;
            makeset(n+2) ;

            FORN( i , v.size() )
            {
                if (i!=takenEdge[j])
                {
                    //watch2(i , takenEdge[j]) ;
                    int u = findset(v[i].u) ;
                    int p = findset(v[i].v) ;

                    if (u!=p)
                    {
                        parent[u] = p;
                        cnt++ ;
                        sum+=v[i].w ;

                        if (cnt == n-1) break ;
                    }
                }
            }
            //watch(sum) ;

            if (cnt == n-1 && miin > sum ) miin = sum ;
        }

        if (miin == INT_MAX) cout << "No second way" << endl ;
        else cout << miin << endl ;
    }





}
