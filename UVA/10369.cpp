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
    int u , v ;
    double w ;
    edge() ;
    edge(int _u , int _v , double _w)
    {
        u = _u ;
        v = _v ;
        w = _w ;
    }
    bool operator < (const edge &p) const{
        return w<p.w ;
    }
};

vector <edge> E ;
vector < pair<int,int> > graph ;
int parent[10005] ;

int check(int num)
{
    if (parent[num] == num) return num ;
    return parent[num] = check(parent[num]) ;
}

int main ()
{
   //freopen("E:/Programming/input.txt", "r" , stdin );

    int testCase ; cin >> testCase ;
    while(testCase--)
    {
        graph.clear() ;
        E.clear() ;
        //clear all
        int numSatelite , n , x, y ;
        cin >> numSatelite >> n ;
        FORN(i,n){
            cin >> x >> y ;
            graph.push_back({x,y}) ;
            parent[i] = i ;
        }
        parent[n] = n ;
        parent[n+1] = n+1 ;
        parent[n+2] = n+2 ;

        FORN(i,n-1)
        {
            FORAB(j,i+1 , n-1)
            {
                double d = sqrt( S(graph[i].xx - graph[j].xx) + S(graph[i].yy - graph[j].yy) );
                E.push_back(edge(i , j , d)) ;
            }
        }

        sort(E.begin() , E.end()) ;
        ll cnt  = n ;
        double ans = 0 ;


        for ( auto i : E )
        {
            int u = check(i.u) ;
            int v = check(i.v) ;

            if (u!=v)
            {
                //watch(i.w) ;
                parent[u] = v ;
                ans  = i.w ;
                cnt-- ;
                if (cnt == numSatelite) break ;
            }
        }

        cout << fixed << setprecision(2) << ans << endl;


    }





}
