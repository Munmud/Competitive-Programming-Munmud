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

#define SIZE                200001
#define MOD                 20071027
using namespace std;

vector <ll> g[SIZE] ;
bool vis[SIZE] , b[SIZE] , c[SIZE] ;
ll a[SIZE] , OtoZ[SIZE] , ZtoO[SIZE] , ans ;

void dfs(ll u , bool chk , ll val)
{
    if (!chk){
        vis[u] = 1 ;
        if ( b[u] && !c[u] ) OtoZ[u]++ ;
        if ( !b[u] && c[u] ) ZtoO[u]++ ;

        for (ll i = 0 ; i<g[u].size() ; i++){
            ll v= g[u][i] ;
            if (!vis[v]){
                dfs(v,chk,val) ;
                OtoZ[u] += OtoZ[v] ;
                ZtoO[u] += ZtoO[v] ;
            }
        }
    }
    else {
        if ( val > a[u] ){
            ans-= 2* MIN(OtoZ[u],ZtoO[u]) * val ;
            ans+= 2* MIN(OtoZ[u],ZtoO[u]) * a[u] ;
        }
        vis[u] = 0 ;
        for(ll i=0 ; i<g[u].size() ; i++){
            ll v = g[u][i] ;
            if (vis[v]){
                dfs(v,chk,MIN(val,a[u])) ;
            }
        }
    }
}

int main ()
{
   //freopen("E:/Programming/input.txt", "r" , stdin );

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    ll n ;
    cin >> n ;
    for(ll i=1;i<=n;i++) cin >> a[i] >> b[i] >> c[i] ;
    for(ll i=1;i<n;i++){
        ll x , y ;
        cin >> x >> y ;
        g[x].pb(y) ;
        g[y].pb(x) ;
    }

    dfs(1,0,-1) ;

    if (OtoZ[1]!=ZtoO[1]){
        cout << -1 << endl ;
        return 0 ;
    }
    ans = (OtoZ[1]+ZtoO[1]) * a[1] ;
    dfs(1,1,a[1]) ;

    cout << ans << endl ;


}
