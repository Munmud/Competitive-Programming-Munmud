
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
const int N = 5050 ;

// --------------  Start Here -------------
vector <int> primeNumber ;
void sieve(int n)
{
    bool primeMark[1000002] ;
    memset(primeMark , true , sizeof(primeMark) ) ;
    int i , j , limit = sqrt(n*1.) +2 ;
    //primeMark[1] = false ;
    //for (i = 4 ; i<=n ; i+=2) primeMark[i] = false ;

    primeNumber.emplace_back(2) ;
    for (i = 3 ; i<=n ; i+=2)
    {
        if (primeMark[i] == false) continue ;
        primeNumber.emplace_back(i) ;
        if (i<=limit){
            for (j = i*i ; j<=n ; j+=i*2)
                primeMark[j] = false ;
        }
    }
}
// ----------- End here ----------------


void _main_main()
{
    ll a,b,m ;
    cin >> a >> b >> m ;
    ll num = MAX(a,b) - MIN(a,b) ;

    if (a == 1 && b ==1) {
        cout << 1 << nl ;
        return ;
    }
    if (a == b){
        cout << 0 << nl ;
        return  ;
    }

    vector <ll> div ;

    for (auto i : primeNumber)
    {
        if (i > num) break ;
        if (num%i == 0){
            div.pb(i) ;
            while (num %i == 0) num/=i ;
        } 
    }
    if (num >1) div.pb(num) ;

    ll lim = (1<<SZ(div)) ;
    ll ans = m+1 ;

    ll lo = a-1 ;
    ll hi = a+m ;

    for (ll i = 1 ; i<lim ; i++)
    {
        ll tt = 1 ;
        for(ll j = 0 ; j<SZ(div) ; j++){
            if (i&(1<<j)) tt*= div[j] ;
        }


        ll res = hi/tt ;
        res -= lo/tt ;


        if ( total_one(i)%2==0) ans+= res ;
        else ans -= res ;
    }

    cout << ans << nl ;

}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve(1e6) ;

    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        cout << "Case " << i+1 << ": " ;
        _main_main() ;
    }
        
}
