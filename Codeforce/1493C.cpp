
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

map <char , int> mp;
ll n,k ;

int have ;

bool is_ok()
{
    int cnt = 0 , cc = 0 ;
    for (auto i : mp)
    {
        if (i.yy%k) cnt+= k-(i.yy%k) ;
        if (cnt > have) return false ;
        cc += i.yy ;
    }
    cc+= cnt ;
    if(cc >n) return false;
    if ( (n-cc)%k) return false ;

    return true ;
}

void _main_main()
{
    mp.clear() ;
    cin >> n >> k ;
    string s , ans ; cin >> s ;
    if (n%k){
        cout << -1 ;
        return ;
    }
    FORN(i,n) mp[s[i]]++ ;
    have = 0 ;
    if (is_ok()){
        cout << s  ;
        return ;
    }

    for (int i = n-1 ; i>=0 ; i--)
    {
        have = n-i-1 ;
        mp[s[i]]-- ;
        for (char ch = s[i]+1 ; ch<='z' ; ch++)
        {
            mp[ch]++ ;
            if (is_ok())
            {
                ans = "" ;
                for (int j = 0 ; j<i ; j++) ans+= s[j] ;
                ans+= ch ;
                int cnt = 0 ;
                for (auto it :mp){
                    if (it.yy%k>0) cnt += k - (it.yy%k) ;
                }
                // wa(ans) ;
                // wa2(ans.size(), cnt) ;
                while ( (ans.size()+cnt) <n) ans+='a' ;
                for (auto it :mp){
                    while (it.yy%k){
                         ans+= it.xx ;
                        it.yy++ ;
                    }
                }
                cout << ans ;
                return ;
            }
            mp[ch]-- ;

        }
    }
     cout << -1 ;
}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
        cout << nl ;
    }
        
}
