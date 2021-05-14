
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
const int N = 500 ;
const int M = 500 ;

char cc[N][M+1] , pp[2][2] ;
char pattern[N][M] , black[N][M] ;
ll n , m  ; 

int solve()
{
    int i , j, s , cnt ;

    for(i = 0 ; i+2 <=n ; i++)
        for(j = 0 ; j+2 <=m ; j++){
            pattern[i][j] = cc[i][j] == pp[0][0] && cc[i][j+1] == pp[0][1] && cc[i+1][j] == pp[1][0] && cc[i+1][j+1] == pp[1][1] ;
            black[i][j] = cc[i][j] == 1 && cc[i][j+1] == 1 && cc[i+1][j] == 1 && cc[i+1][j+1] == 1 ;
        }

    cnt = 0 ;

    for (s = 2 ; s<=n && s<=m ; s*=2)
        for (i = 0 ; i+s+s <=n ; i++)
            for (j = 0 ; j +s +s <=m ; j++){
                pattern[i][j] = (pp[0][0] == 0 && pattern[i][j] || pp[0][0] == 1 && black[i][j]) && (pp[0][1] == 0 && pattern[i][j + s] || pp[0][1] == 1 && black[i][j + s])
				&& (pp[1][0] == 0 && pattern[i + s][j] || pp[1][0] == 1 && black[i + s][j]) && (pp[1][1] == 0 && pattern[i + s][j + s] || pp[1][1] == 1 && black[i + s][j + s]);

                black[i][j] = black[i][j] && black[i][j + s] && black[i + s][j] && black[i + s][j + s];
                
                if (pattern[i][j]) cnt++ ;
            }
    return cnt ;
}


void _main_main()
{
    int i , j , a, b, c, d, ans ;

    cin >> n >> m ;
    for (i = 0 ; i<n ; i++){
        cin >> cc[i] ;
        for (j = 0 ; j<m ; j++)
            cc[i][j] = cc[i][j] == '.' ? 0 : 1 ;
    }

    ans = 0 ;

    for (a = 0 ; a <= 1 ; a++)
        for (b = 0 ; b<=1 ; b++)
            for (c = 0 ; c<=1 ; c++)
                for (d = 0 ; d<=1 ; d++){
                    pp[0][0] = a ;
                    pp[0][1] = b ;
                    pp[1][0] = c ;
                    pp[1][1] = d ;
                    ans+= solve() ;
                }
    cout << ans << nl ;



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
