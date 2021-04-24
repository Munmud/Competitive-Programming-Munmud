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

const int N = 2000+20 ;
void computeLPSArray(string & pat , vector<int> & lps)
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
int stIdx[N] , edIdx[N] ;

void KMPSearch(string & pat , string & txt , int cmd)
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
            if (cmd == 1) stIdx[i-j] = 1 ;
            else edIdx[i-j + M -1] = 1 ;
            j = lps[j-1] ; 
        }
        else if ( i<N && pat[j] != txt[i] ){
            if (j != 0) j = lps[j-1] ;
            else i = i+1 ;
        }
    }
}
VL hashValue ;

void _main_main()
{
    ll n  ;
    string s ,  st ,ed ;
    cin >> s >> st >> ed ;


    KMPSearch(st,s, 1) ;
    KMPSearch(ed,s, 2) ;

    FORN(i,s.size())
        if (stIdx[i] == 1){
            ll val = 0 ;
            for (int j = i ; j<s.size() ; j++)
            {
                val = val * 89 + s[j] ;
                int len = j-i+1 ;
                if (edIdx[j] == 1 && len >= max(st.size() , ed.size())) hashValue.emplace_back(val) ;
            }
        }

        sort(ALL(hashValue)) ;

        hashValue.resize(unique(ALL(hashValue)) - hashValue.begin()) ;
        cout << hashValue.size() << nl ;

    

    // FORN(i,s.size()) cout << stIdx[i] << " "  ;
    // cout << nl ;
    // FORN(i,s.size()) cout << edIdx[i] << " "  ;
    // cout << nl ;
        
    
 
}
 
 
 
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // inv1[0] = 1, inv1[1] = modinverse((ll)BB1, MMOD1);
    // inv2[0] = 1, inv2[1] = modinverse((ll)BB2, MMOD2);

    // power1[0] = 1;
    // power2[0] = 1;
    // power1[1] = BB1 %MMOD1;
    // power2[1] = BB2 %MMOD2;

    // for (int i = 2; i < N; ++i){
    //     inv1[i] = inv1[i - 1] * 1LL * inv1[1] % MMOD1;
    //     inv2[i] = inv2[i - 1] * 1LL * inv2[1] % MMOD2;
    //     power1[i] = power1[i-1] * 1ll * BB1 % MMOD1;
    //     power2[i] = power2[i-1] * 1ll * BB2 % MMOD2;
    // } 
 

 
    int testCase = 1 ;//cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;  
    }
        
}