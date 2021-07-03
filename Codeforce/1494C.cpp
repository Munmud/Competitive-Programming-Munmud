
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

#define MOD                1000000007
const int N = 5050 ;

int ans = 0 ;

void go( vector <int> & n , vector <int> & m )
{
    int i = 0 ;

    list <int> right_box ;

    FORN(j,SZ(m)){
        while (i<SZ(n) && n[i] <m[j]) i++ ;
        if (i<SZ(n) && n[i] == m[j]) right_box.push_back(n[i]) ;
    }
    int res = SZ(right_box) ;

    int box = 0 ;
    i = 0 ;

    FORN(j,SZ(m)){
        while (i<SZ(n) && n[i] <m[j]) box++ , i++ ;
        if (i<SZ(n) && n[i] == m[j]) {
            box++ ; 
            i++;
            right_box.pop_front() ; 
        }

        auto it = lower_bound(ALL(m) , m[j]-box+1) ;
        int id = distance(m.begin() , it) ;
        
        res = MAX(res , j-id+1 + SZ(right_box)) ;

    }
    ans+= res ;

}


void _main_main()
{
    ll n ,m ; cin >> n >> m;
    vector <int> pos_n,neg_n ,pos_m,neg_m ;
    FORN(i,n){
        int x ;cin >> x ;
        if (x >0)pos_n.pb(x) ;
        else neg_n.pb(-x) ;
    }
    FORN(i,m){
        int x ;cin >> x ;
        if (x >0)pos_m.pb(x) ;
        else neg_m.pb(-x) ;
    }

    sort(ALL(pos_n)) ;
    sort(ALL(pos_m)) ;
    sort(ALL(neg_n)) ;
    sort(ALL(neg_m)) ;

    go(pos_n,pos_m) ;
    go(neg_n,neg_m) ;

    cout << ans << nl ;
    ans = 0 ;

}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}