
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

int arr[N] ;

void sieve()
{
    for (int i = 2 ; i<N ; i+=2) arr[i] = 2 ;
    for (int i = 3 ; i<N ; i+=2){
        if (arr[i] !=0) continue ;
        for (int j = i ; j<N ; j+=i){
            if (arr[j] ==0) arr[j] = i ;
        }

    } 

}

template <class T> inline T bigmod(T p,T e){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p);
        p = (p * p);
    } return (T)ret;
}

unordered_map <string , ll> ump ;



void _main_main()
{
    ll n,k ;
    cin >> n>> k ;
    ll cc = 0 ;
    ll ext = 0 ;
    FORN(i,n)
    {
        ll x ;
        cin >> x ;
        map <ll , ll> mp ;
        while (x !=1){
            mp[arr[x]]++ ;
            x/= arr[x] ;
        }
        string ase = ""  ;
        string lagbe = "" ;
        for (auto i : mp)
        {
            if (i.yy %k ==0) continue ;
            // ase *= bigmod(i.xx,i.yy%k) ;
            // lagbe *= bigmod(i.xx,k - i.yy%k) ;
            ase += "(" + to_string(i.xx) + "." + to_string(i.yy%k) ;
            lagbe += "(" + to_string(i.xx) + "." + to_string(k - i.yy%k) ;
        }

        // wa2(ase , lagbe) ;

        if (ase== "" && lagbe == "") ext++ ;
        else {
            cc+= ump[lagbe] ;
            ump[ase]++ ;
        }
    }


    cc+= ext * (ext-1) /2 ;

    cout << cc << nl ;

}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve() ;

    int testCase = 1 ;//cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}
