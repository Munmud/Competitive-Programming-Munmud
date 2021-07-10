
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
const int N = 1e6+100 ;

double v , ans ;
void go (double a , double b, double c , double res , double cc){
    // wa4(a,b,c,res);
    if (a >= 0.0000001){
        if (a<=v){
            if (b>=0.0000001)
                go(0,b+(a/2.0),c+(a/2.0),res*a,cc+1) ;
            else go(0,0,c+a,res*a,cc+1) ;
        } 
        else{
            if (b>=0.0000001)
                go(a-v,b+(v/2.0),c+(v/2.0),res*a,cc+1) ;
            else go(a-v,0,c+v,res*a,cc+1) ; 

        } 
    }
    if (b>=0.0000001){
        if (b<=v){
            if (a>=0.0000001)
                go(a+(b/2.0),0,c+(b/2.0),res*b,cc+1) ;
            else go(0,0,c+b,res*b,cc+1) ;
        } 
        else{
            if (a>=0.0000001)
                go(a+(v/2.0),b-v,c+(v/2.0),res*b,cc+1) ;
            else go(0,b-v,c+v,res*b,cc+1);

        } 
    }
    double tt = c*res*cc ;
    // wa(tt) ;
    ans+= tt ;
    
}


void _main_main()
{
    ll n  ;
    double a,b,c;
    cin >> a>> b >> c >> v ;
    ans = 0.0 ;

    go(a,b,c,1,1) ;

    cout << fixed << setprecision(12) <<  ans << nl ;
}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase = 1 ;
    cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}
