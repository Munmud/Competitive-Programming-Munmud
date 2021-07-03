
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


unsigned seed1 = std::chrono::system_clock::now().time_since_epoch().count();
default_random_engine gen(seed1); //gen(time(NULL));

int randd(int a , int b)
{
    std::uniform_int_distribution<int> dis(a, b );
    return dis(gen) ;
}

long long randd(long long a , long long b)
{
    std::uniform_int_distribution<long long> dis(a, b );
    return dis(gen) ;
}


long double randd(long double a , long double b)
{
    std::uniform_real_distribution<long double> dis(a, b );
    return dis(gen) ;
}


string s ;

void go(vector<int>& v , int k )
{
    int n = v.size() ;
    if (n == 0 || k <= 0) return ;
    // cout << v << nl ;

    VL arr(26,0) , cc(26,0) ;
    FORN(i,n) arr[s[ v[i] ]-'a'] += s.size()-v[i] , cc[s[ v[i] ]-'a']++ ;
    FORAB(i,1,25) arr[i] += arr[i-1] ;
    
    auto it = lower_bound(ALL(arr),k) ;
    int id = distance(arr.begin() ,lower_bound(ALL(arr),k) ) ;
    // if (id != n) 
        cout << (char)(id + 'a') ;

        // wa2(id,k) ;
        // cout << arr << nl ;

    vector <int> vv ;
    for (auto i : v) if (i+1 <s.size() &&  s[i]-'a' == id) vv.emplace_back(i+1) ;

    // wa2(cc[id] , cc[id-1]) ;

    ll fnd = cc[id] + (id == 0 ? 0 : arr[id-1]) ;
    // wa(fnd) ;

    go(vv , k - fnd ) ;
    
}
int k ;


void _main_main()
{
    // ll n , k  ;
    cin >> s >> k ; 
    // s = string (randd(40,60) , '.') ;

    ll n = s.size() ;
    // FORN(i,n) s[i] = randd(0,25) + 'a' ;
    // k = randd(1ll , n * (n+1) /2) ;
    // wa2(s,k) ;

    // vector <string > se ;
    // FORN(i,n) FORAB(j,i,n-1) se.push_back(s.substr(i,j-i+1)) ;
    // sort(ALL(se)) ;
    // FORN(i,se.size()) wa2(i,se[i]) ;
    // cout << se[k-1] << nl ;


    if (n * (n+1)/2 < k){
        cout << "No such line." << nl ;
        return ;
    }

    vector <int> v ;
    FORN(i,n) v.emplace_back(i) ;
    go(v , k) ;


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
