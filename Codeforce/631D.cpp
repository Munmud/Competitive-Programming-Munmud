
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

// string txt = "ABABDABACDABABCABAB";
// string pat = "ABABCABAB" ;

void computeLPSArray(vector <pair <char , ll> > & pat , vector<int> & lps)
{
    int len = 0, i = 1 ;
    lps[0] = 0 ;

    while (i<pat.size()){
        if (pat[i] == pat[len]){
            len++ ;
            lps[i++] = len ;
        }
        else {
            if (len != 0) len = lps[len-1] ;
            else lps[i++] = 0 ;
        }
    }
}

vector <int> idxList ;

void KMPSearch(vector <pair <char , ll> > & pat , vector <pair <char , ll> > & txt)
{
    int M = pat.size() ;
    int N = txt.size() ;

    vector <int> lps(M) ;
    computeLPSArray(pat , lps) ;

    int i = 0 , j = 0 ;
    while (i<N){
        if (pat[j] == txt[i]) i++ , j++ ;

        if (j == M){
            // cout << "Found Pattern at index " << i-j << endl ;
            idxList.emplace_back(i-j) ;
            j = lps[j-1] ; 
        }

        else if ( i<N && pat[j] != txt[i] ){
            if (j != 0) j = lps[j-1] ;
            else i = i+1 ;
        }
    
    }
}


void _main_main()
{
    ll  n , m  ;
    cin >> n >> m ;
    vector <pair <char , ll> > a,b ;
    FORN(i,n) {
        ll x ; cin >> x; 
        char xx ; cin >> xx >> xx ;
        if (!a.empty() && a.back().xx == xx) a[a.size()-1].yy += x ;
        else a.push_back({xx,x}) ;
    }
    pair <char , ll> uu , vv ;

    FORN(i,m) {
        ll x ; cin >> x; 
        char xx ; cin >> xx >> xx ;
        if (!b.empty() && b.back().xx == xx) b[b.size()-1].yy += x ;
        else b.push_back({xx,x}) ;
    }
    n = a.size() ;
    m = b.size() ;

    auto it = b.begin() ;
    it++ ;
    uu = *b.begin() ;
    if (b.size() >1) vv = b.back() , b.pop_back() ;
    
    vector <pair <char , ll> > bb (it , b.end()) ;



    ll cc = 0 ;
    if (n <m){}
    else if (m == 1){
        FORN(i,n) if (a[i].xx == uu.xx && a[i].yy >= uu.yy) cc+= abs(a[i].yy - uu.yy)+1 ;
    }
    else if (m == 2){
        FORN(i,n-1){
            if (a[i].xx == uu.xx && a[i+1].xx == vv.xx && a[i].yy >= uu.yy && a[i+1].yy >= vv.yy) cc++ ;
        }

    }
    else{
        KMPSearch(bb,a) ;
        for (auto i : idxList)
        {
            if (i-1 >=0 && a[i-1].xx == uu.xx && a[i-1].yy >= uu.yy ){
                int id = i + m -2 ;
                if (id < n && a[id].xx == vv.xx && a[id].yy>= vv.yy ) cc++ ;
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
