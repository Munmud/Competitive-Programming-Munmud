
/***
 *                                ╔╦╗╔═╗╔═╗╔╗╔╔╦╗╔═╗╔═╗╦╦═╗  ╔╦╗╔═╗╦ ╦╔╦╗╔═╗╔═╗╔╦╗ 
 *                                ║║║║ ║║ ║║║║ ║ ╠═╣╚═╗║╠╦╝  ║║║╠═╣╠═╣║║║║ ║║ ║ ║║ 
 *                                ╩ ╩╚═╝╚═╝╝╚╝ ╩ ╩ ╩╚═╝╩╩╚═  ╩ ╩╩ ╩╩ ╩╩ ╩╚═╝╚═╝═╩╝ 
 *    ╦╔╗╔╔═╗╔═╗╦═╗╔╦╗╔═╗╔╦╗╦╔═╗╔╗╔  ╔═╗╔╗╔╔╦╗  ╔═╗╔═╗╔╦╗╔╦╗╦ ╦╔╗╔╦╔═╗╔═╗╔╦╗╦╔═╗╔╗╔  ╔═╗╔╗╔╔═╗╦╔╗╔╔═╗╔═╗╦═╗╦╔╗╔╔═╗ 
 *    ║║║║╠╣ ║ ║╠╦╝║║║╠═╣ ║ ║║ ║║║║  ╠═╣║║║ ║║  ║  ║ ║║║║║║║║ ║║║║║║  ╠═╣ ║ ║║ ║║║║  ║╣ ║║║║ ╦║║║║║╣ ║╣ ╠╦╝║║║║║ ╦ 
 *    ╩╝╚╝╚  ╚═╝╩╚═╩ ╩╩ ╩ ╩ ╩╚═╝╝╚╝  ╩ ╩╝╚╝═╩╝  ╚═╝╚═╝╩ ╩╩ ╩╚═╝╝╚╝╩╚═╝╩ ╩ ╩ ╩╚═╝╝╚╝  ╚═╝╝╚╝╚═╝╩╝╚╝╚═╝╚═╝╩╚═╩╝╚╝╚═╝ 
 *                            ╦ ╦╔╗╔╦╦  ╦╔═╗╦═╗╔═╗╦╔╦╗╦ ╦  ╔═╗╔═╗  ╦═╗╔═╗ ╦╔═╗╦ ╦╔═╗╦ ╦╦ 
 *                            ║ ║║║║║╚╗╔╝║╣ ╠╦╝╚═╗║ ║ ╚╦╝  ║ ║╠╣   ╠╦╝╠═╣ ║╚═╗╠═╣╠═╣╠═╣║ 
 *                            ╚═╝╝╚╝╩ ╚╝ ╚═╝╩╚═╚═╝╩ ╩  ╩   ╚═╝╚    ╩╚═╩ ╩╚╝╚═╝╩ ╩╩ ╩╩ ╩╩ 
 *                                          https://github.com/Munmud 
 *                                           moontasir042@gmail.com 
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

#define wa2(x , y)              cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define wa(x)                   cout << (#x) << " is " << (x) << endl

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

#define SIZE                (int)15
#define MOD                 1000000007


const int fx[]={0, -1, 1, 0};
const int fy[]={1, 0, 0, -1};
const string dir = "ENSW";


int n , m ;
string maze[SIZE] ;
PII nextMost[SIZE][SIZE][4] ;
vector <PII> uPoint , vPoint ;
bitset <SIZE> vis[SIZE] ;

void go_there(int r,int c,int d)
{
    if (nextMost[r][c][d].xx !=-1) return ;
    
    int rr = r + fx[d] ;
    int cc = c + fy[d] ;


    if (!BOUNDARY(rr,cc,n,m)) nextMost[r][c][d] = PII{rr,cc} ;
    else if (maze[rr][cc] == '#' ) nextMost[r][c][d] = PII {r,c} ;
    else 
    {
        go_there(rr,cc,d) ;
        nextMost[r][c][d] = nextMost[rr][cc][d] ;
    } 
}

void preprocess()
{
    fill(&nextMost[0][0][0] , &nextMost[SIZE][0][0] , PII{-1,-1}) ;

    FORN(i,n) FORN(j,m){
        if (maze[i][j] == '.'){
            FORN(k,4){
                go_there(i,j,k) ;
            }
        }
    }

}

bool check(int r, int c )
{
    if (!BOUNDARY(r,c,n,m)) return true ;
    if (vis[r][c]) return false ;
    vis[r][c] = 1 ;
    FORN(k,4)
    {
        if ( check( nextMost[r][c][k].first , nextMost[r][c][k].second ) ) return true ;
    }
    return false ;
}

bool isPossible()
{
    uPoint.clear() ;
    FORN(i,n) FORN(j,m)
    {
        if (maze[i][j] == '.')
        {
            FORN(i,SIZE) vis[i].reset() ;
            if ( !check(i,j)) return false ;
            uPoint.push_back({i,j}) ;
        }
    }
    return true ;
}

string dfs()
{
    map < vector <PII> , string > mp ;
    queue <vector <PII> > q ;
    
    mp[uPoint] = "" ;
    q.push(uPoint) ;


    while(!q.empty())
    {
        uPoint = q.front() ; q.pop() ;
        string str = mp[uPoint] ;

        if (uPoint.empty()) return str ;

        FORN(k,4)
        {
            vPoint.clear() ;
            for (auto it = uPoint.begin() ; it!= uPoint.end() ; it++)
            {
                int r = it->first ;
                int c = it->second ;
                int rr = nextMost[r][c][k].first ;
                int cc = nextMost[r][c][k].second ;

                if (BOUNDARY(rr,cc,n,m)) vPoint.push_back({rr,cc}) ;
            }

            sort(ALL(vPoint)) ;
            vPoint.erase( unique(ALL(vPoint)), vPoint.end() ) ;

            if (mp.find(vPoint) == mp.end())
            {
                mp[vPoint] = str + dir[k] ;
                q.push(vPoint) ;
            }
        }
    }
    return "" ;

}

void _main_main()
{
    cin >> n >> m ;
    FORN(i,n) cin >> maze[i] ;
    preprocess() ;

    if (isPossible()) cout << dfs() << endl   ;
    else cout << "Impossible" << endl ;
}



int main ()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);

    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        cout << "Case " << i+1 << ": " ;
        _main_main() ;
    }
        
}

