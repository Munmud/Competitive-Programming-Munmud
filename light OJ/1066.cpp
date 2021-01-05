
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

/*----------------------Graph Moves----------------*/
const int fx[]={+1,-1,+0,+0};
const int fy[]={+0,+0,+1,-1};
// const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
// const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

int n ;
int k ;
vector <PII> v(27) ;
string s[15] ;

struct node
{
    int x,y,d ;
    node(int _x , int _y , int _d )
    {
        x = _x ;
        y = _y ;
        d = _d ;
    }
};

int go(int st , int ed)
{
    bool visit[n+2][n+2] ;
    MEM(visit , 0) ;
    queue <node> q ;
    s[v[st].xx][v[st].yy] = '.' ;

    visit[v[st].xx][v[st].yy] = 1 ;

    q.push(node(v[st].xx , v[st].yy , 0)) ;

    while (!q.empty())
    {
        node pp = q.front() ;
        q.pop() ;
        FORN(t,4)
        {
            int xx = pp.x + fx[t] ;
            int yy = pp.y + fy[t] ;

            if (!BOUNDARY(xx,yy,n,n)) continue ;
            if (visit[xx][yy]) continue ;
            // if (s[xx][yy] == '#') continue ;
            if (xx == v[ed].xx && yy == v[ed].yy) return pp.d+1 ;
            if (s[xx][yy] == '.'){
                q.push(node(xx,yy,pp.d+1)) ;
                visit[xx][yy] = 1 ;
            } 
        }
    }

    return INT_MAX ;
}

void _main_main()
{
    cin >> n ;
    k = 0 ;
    FORN(i,n) cin >> s[i] ;
    FORN(i,n) FORN(j,n)
    {
        if (s[i][j] >= 'A' && s[i][j] <= 'Z'){
            k++ ;
            v[s[i][j]-'A'] = {i,j} ; 
        }
    }

    int ans = 0 ;

    FORAB(i,1,k-1){
        int d = go(i-1 , i) ;
        if (d == INT_MAX){
            cout << "Impossible" << endl ;
            return ;
        }
        ans+=d ;
    }
    cout << ans << endl ;


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
