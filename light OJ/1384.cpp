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
int n ,m ;
ll totalCost , mx ;

struct data
{
    int v, band , cost ;
    data() ;
    data(int v , int band , int cost)
    {
        this->v = v;
        this-> band = band ;
        this->cost = cost ;
    }
    bool operator < (const data &p) const{
        if (band == p.band) return cost < p.cost ;
        return band > p.band ;
    }
};
vector<data> vec[64] ;
bool visit[64] ;
void go (  int c , int band , int node , int cntNode)
{

    if (cntNode == n)
    {
        mx = MAX(mx,band) ;
        return ;
    }

    visit[node] = true ;
    sort(ALL(vec[node])) ;
    for (auto i : vec[node])
    {

        if (visit[i.v] == false && c+i.cost<=totalCost )
        {
            go(  c+i.cost , MIN(band,i.band) , i.v , cntNode+1 )  ;
        }
    }
    visit[node] = false ;

}


int main ()
{
   //freopen("E:/Programming/input.txt", "r" , stdin );

    hitAi;
    int testCase ; cin >> testCase ;

    FORN(t,testCase){
        cin >> n >> m >> totalCost ;

        FORN(i,n+1) vec[i].clear() ;
        mx = -1 ;

        FORN(i,m)
        {
            int u , v , band , cost ;
            cin >> u >> v >>  band >> cost ;
            vec[u].push_back({v,band,cost}) ;
        }
         MEM(visit,false) ;
        go(0,INT_MAX,0,1) ;

        cout << "Case " << t+1 << ": " ;
        if (mx == -1) cout << "impossible" ;
        else cout << mx  <<  " kbps"  ;
        cout << endl ;
    }



}
