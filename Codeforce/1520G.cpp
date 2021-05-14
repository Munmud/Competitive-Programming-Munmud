
/*
Moontasir Mahmood 
Information and Communication Engineering 
University of Rajshahi 
https://github.com/Munmud 
moontasir042@gmail.com 
 */


#include <bits/stdc++.h>

#define setinf(ar)              memset(ar,126,sizeof ar)
#define MEM(a, b)               memset ( a, (b), sizeof(a) )
#define MAX(a, b)               ((a) > (b) ? (a) : (b))
#define MIN(a, b)               ((a) < (b) ? (a) : (b))
#define ABS(X)                  ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X)                    ( (X) * (X) )
#define SZ(V)                   (int )V.size()
#define FORN(i, n)              for(int i = 0; i < n; i++)
#define FORAB(i, a, b)          for(int i = a; i <= b; i++)
#define ALL(V)                  V.begin(), V.end()
#define ALLR(V)                 V.rbegin(), V.rend()
#define IN(A, B, C)             ((B) <= (A) && (A) <= (C))
#define AIN(A, B, C)            assert(IN(A, B, C))

#define nl                      "\n"


#define ll                      long long int
#define xx                      first
#define yy                      second
#define pb(x)                   push_back(x)
#define PI                      acos(-1.0)

#define PII                     pair<int, int>
#define PLL                     pair<long long int, long long int>
#define VI                      vector <int>
#define VL                      vector <long long int>

#define BOUNDARY(i, j, r , c)   ((i >= 0 && i < r) && (j >= 0 && j < c))
#define max3(x, y, z)           MAX(MAX(x, y), MAX(y, z))

#define front_zero(n)           __builtin_clzll(n)
#define back_zero(n)            __builtin_ctzll(n)
#define total_one(n)            __builtin_popcountll(n)

using namespace std;

/*---------------------------------- Debug ------------------------------------*/

#define wa(x)            cout << (#x) << " is " << (x) << endl
#define wa2(x , y)       cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define wa3(x , y , z )  cout << (#x) << " " << (#y)<<  " " << (#z)<< " is " << (x) << " " << (y)<< " " << (z) <<  endl
#define wa4(x , y , z, w )cout << (#x) << " " << (#y)<<  " " << (#z) <<  " " << (#w)<< " is " << (x) << " " << (y)<< " " << (z) << " " << (w) <<  endl

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}
template <class T>
ostream & operator << (ostream & os, vector <T> const& x) {
    os << "{ ";
    for(auto& y : x) os << y << " ";
    return os << "}";
}
template <class T>
ostream & operator << (ostream & os, set <T> const& x) {
    os << "{ ";
    for(auto& y : x) os << y << " ";
    return os << "}";
}
template <class T>
ostream & operator << (ostream & os, list <T> const& x) {
    os << "{ ";
    for(auto& y : x) os << y << " ";
    return os << "}";
}
template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
    os << "[";
    typename multiset< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}
template < typename F, typename S >
ostream &operator << ( ostream & os, const multimap< F, S > &v ) {
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}
/*---------------------------------- x ------------------------------------*/


const ll MOD = 1e9+7 ;
const int N = 5050 ;

const int fx[]={+1,-1,+0,+0};
const int fy[]={+0,+0,+1,-1};


void bfs(int sx , int sy, vector<vector<int>> & d , vector<vector<int>>&a){
    int n = d.size() ;
    int m = d[0].size() ;


    queue<PII> q ;
    q.push({sx,sy}) ;
    d[sx][sy] = 1 ;
    while (!q.empty()){
        auto [x,y] = q.front() ;
        q.pop() ;
        FORN(k,4)
        {
            auto xx = x + fx[k] ;
            auto yy = y + fy[k] ;
            if (!BOUNDARY(xx,yy,n,m)) continue ;
            if (a[xx][yy] == -1) continue ;
            if (d[xx][yy] != 0) continue ;

            d[xx][yy] = d[x][y] +1 ;
            q.push({xx,yy}) ;
        }
    }
    for (auto &e : d) {
        for (auto &i : e) {
            i--;
        }
    }
    
}


void _main_main()
{
    int n,m,w ; cin >> n >> m >> w ;
    vector<vector<int>> a(n,vector<int>(m)) ;
    vector<vector<int>> d1(n,vector<int>(m)) ;
    vector<vector<int>> d2(n,vector<int>(m)) ;

    FORN(i,n) FORN(j,m) cin >> a[i][j] ;

    bfs(0,0,d1,a) ;
    bfs(n-1,m-1,d2,a) ;

    ll bestFinish = 1e18 ;
    FORN(i,n) FORN(j,m) {
        if ( d2[i][j] != -1 && a[i][j] >= 1 )
            bestFinish = min( bestFinish , a[i][j] + w * 1ll * d2[i][j] ) ;
    }


    ll ans = w * 1ll * d1[n-1][m-1] ;
    if (d1[n-1][m-1] == -1) ans = 1e18 ;

    FORN(i,n) FORN(j,m){
        if (d1[i][j] != -1 && a[i][j] >= 1 && bestFinish != 1e18) 
            ans = min(ans , w * 1ll * d1[i][j] + a[i][j] + bestFinish) ;
    }

    if (ans == 1e18) cout << -1 << nl ;
    else cout << ans << nl ;



}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase = 1 ;//cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}
