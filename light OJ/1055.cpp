
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

#define SIZE                (int)5005
#define MOD                 1000000007

const int fx[]={+1,-1,+0,+0};
const int fy[]={+0,+0,+1,-1};

struct data
{
    PII a,b,c ;
    int d ;
    data(PII _a , PII _b , PII _c , int _d)
    {
        a = _a ;
        b = _b ;
        c = _c ;
        d = _d ;
    }
    data(){}
};

int n ;
string maze[15] ;
bool vis[10][10][10][10][10][10] ;
set <PII> se ;
int ans ;

bool check(PII pt)
{
    if ( BOUNDARY(pt.xx , pt.yy , n, n)){
        if (maze[pt.xx][pt.yy] != '#') return 0 ;
    }
    
    return 1 ;
}

void dfs(data info)
{
    info.d = 0 ;
    queue <data> q ;
    q.push(info) ;
    vis[info.a.xx][info.a.yy][info.b.xx][info.b.yy][info.c.xx][info.c.yy] = 1 ;

    while (!q.empty())
    {
        data dt = q.front() ; q.pop() ;
        PII a = dt.a ;
        PII b = dt.b ;
        PII c = dt.c ;

        // cout << a << b << c << endl ;

        if (se.find(a) != se.end() && se.find(b) != se.end() && se.find(c) != se.end()){
            ans = dt.d ;
            return ;
        }

        FORN(t,4)
        {
            PII x = { a.xx + fx[t] , a.yy + fy[t] } ;
            PII y = { b.xx + fx[t] , b.yy + fy[t] } ;
            PII z = { c.xx + fx[t] , c.yy + fy[t] } ;
            if (check(x)) x = a ;
            if (check(y)) y = b ;
            if (check(z)) z = c ;

            if (x == y && y == z) x = a , y = b , z = c ;
            if (x == y) x=a , y =b ;
            if (x == z) x=a , z =c ;
            if (z == y) z=c , y =b ;

            if (x == y && y == z) x = a , y = b , z = c ;
            if (x == y) x=a , y =b ;
            if (x == z) x=a , z =c ;
            if (z == y) z=c , y =b ;

            // if (x == y || y == z || z == x) cout << a << b << c << x << y << z << endl ;
            // if (maze[x.xx][x.yy] == '#') cout << x << endl ;
            // if (maze[y.xx][y.yy] == '#') cout << y << endl ;
            // if (maze[z.xx][z.yy] == '#') cout << z << endl ;


            if (vis[x.xx][x.yy][y.xx][y.yy][z.xx][z.yy]) continue ;
            vis[x.xx][x.yy][y.xx][y.yy][z.xx][z.yy] = 1 ;

            q.push(data(x,y,z , dt.d+1)) ;
        }

    }
    
}

void _main_main()
{
    se.clear() ;
    MEM(vis , 0) ;
    ans = -1 ;
    data info ;

    cin >> n ;
    FORN(i,n)
    {
        cin >> maze[i] ;
        FORN(j,n)
        {
            if ( maze[i][j] == 'X' ) se.insert({i,j}) ;
            else if (maze[i][j] == 'A') info.a = {i,j} ;
            else if (maze[i][j] == 'B') info.b = {i,j} ;
            else if (maze[i][j] == 'C') info.c = {i,j} ;
        }
    }
    dfs(info) ;
    if (ans == -1) cout << "trapped" << "\n" ;
    else cout << ans << "\n" ;
}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        cout << "Case " << i+1 << ": " ;
        _main_main() ;
    }
        
}
