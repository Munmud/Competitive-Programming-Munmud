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
const int N = 1e5+10 ;

int idx_LEFT[N] , idx_RIGHT[N] ;
string ans ;

int cLeft(string &a , string &b)
{
    int i = 0 , j = 0 ;

    while (i < a.size()){
        if (j == b.size()) break ;
        if (a[i] == b[j]){
            idx_LEFT[j] = i ; 
            i ++ , j ++ ;
        } 
        else i++ ;
    }
    return j ;
}

int cRight(string &a , string &b)
{
    int i = a.size()-1 , j = b.size()-1 ;

    while (i >=0 ){
        if ( j == -1 ) break ;
        if (a[i] == b[j]){
            idx_RIGHT[j] = i ; 
            i -- , j -- ;
        } 
        else i-- ;
    }
    return b.size()-j -1 ;
}
 
void _main_main()
{
    ll n  ;
    string a , b ,t ;
    cin >> a >> b ;

    int mx_left = cLeft(a,b) , mx_right = cRight(a,b) ;
    // wa2(mx_left , mx_right) ;

    if (mx_left == 0 && mx_right == 0) cout << '-' << nl ;
    else if (mx_left == 0) cout << b.substr(b.size() - mx_right) << nl ;
    else if (mx_right == 0 ) cout <<  b.substr(0 , mx_left) << nl ; 
    else{
        int i = -1 ;
        int siz = 0 ; 
        PII uu = {-1,-1} ;
        for (int k = b.size() - mx_right ; k<b.size() ; k++)
        {
            int idx = idx_RIGHT[k] ;
            while (i+1 < mx_left && idx_LEFT[i+1] < idx && i+1 <k) i++ ;
            int sz = i+1 + b.size() -k ;
            if (sz > siz){
                siz = sz ;
               uu = {i , k} ; 
            }

        }
        if (mx_left >= siz && mx_left>= mx_right) cout <<  b.substr(0 , mx_left) << nl ; 
        else if (mx_right >= siz && mx_right >= mx_left)  cout << b.substr(b.size() - mx_right) << nl ;
        else cout << b.substr(0,uu.xx+1) << b.substr(uu.yy) ;

    }


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