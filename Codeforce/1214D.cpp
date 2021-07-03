
/*
Moontasir Mahmood 
Information and Communication Engineering 
University of Rajshahi 
https://github.com/Munmud 
moontasir042@gmail.com 
 */
   vector< vector< vector<int> > > dp( n + 5, vector< vector<int> > ((n + 5) / 2,vector<int> (2, INF)));

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

#define wa2(x , y)              cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define wa(x)                   cout << (#x) << " is " << (x) << endl
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
/*---------------------------------- x ------------------------------------*/

const ll MOD = 1e9+7 ;

/*----------------------Graph Moves----------------*/
const int fx[]={+1,+0};
const int fy[]={+0,+1};
const int fx1[]={-1,+0};
const int fy1[]={+0,-1};
// const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
// const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

unordered_set<ll> se ;
void inst(int x , int y)
{
    ll id = 1ll * x * 1e7 + y ;
    se.insert(id) ; 
}
bool ch(int x , int y)
{
    ll id = 1ll * x * 1e7 + y ;
    if (se.find(id) != se.end()) return true ;
    return false ;
}


void _main_main()
{
    ll n , m ; cin >> n >> m ;
    const int N = n+10 ;
    const int M = m+10 ;

    string s[N] ; FORN(i,n) cin >> s[i] ;
    bool vis[N][M] ; 

    queue <pair <int ,PII> > q ;

    MEM(vis , 0) ;
    q.push({0,{n-1,m-1}}) ;

    while (!q.empty()){
        int dd = q.front().xx ;
        int x = q.front().yy.xx ;
        int y = q.front().yy.yy ;

        // if (x == n-1)
        if (x == 0 && y == 0){
            while(!q.empty()) q.pop() ;
            break ;
        }

        q.pop() ;
        FORN(k,2){
            int xx = x + fx1[k] ;
            int yy = y + fy1[k] ;

            if (xx==-1) continue ;
            if (yy==-1) continue ;
            if (s[xx][yy] == '#') continue ;

            if (vis[xx][yy] == 0){
                vis[xx][yy] = 1 ;
                inst(xx,yy) ;
                q.push({dd+1 , {xx,yy}}) ;
            }
        }
    }

    q.push({0,{0,0}}) ;
    vector <PII> dist[N+M] ;

    int cc = 0 ;
    int last_dist ;

    MEM(vis , 0) ;

    while (!q.empty()){
        int dd = q.front().xx ;
        int x = q.front().yy.xx ;
        int y = q.front().yy.yy ;

        // if (x == n-1)
        if (x == n-1 && y == m-1){
            cc = 2 ;
            last_dist = dd ;
            break ;
        }

        q.pop() ;
        FORN(k,2){
            int xx = x + fx[k] ;
            int yy = y + fy[k] ;

            if (xx==n) continue ;
            if (yy==m) continue ;
            if (s[xx][yy] == '#') continue ;

            if (vis[xx][yy] == 0){
                vis[xx][yy] = 1 ;
                if (ch(xx,yy)) dist[dd+1].push_back({xx,yy}) ;
                q.push({dd+1 , {xx,yy}}) ;
            }
        }
    }

    if (cc == 2){
        FORAB(i,1,last_dist-1){
            if (dist[i].size() == 1) {
                cc = 1 ;
                break ;
            }
        }
    }

    cout << cc << nl ;




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
