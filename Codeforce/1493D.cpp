
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
const int N = 2e5+10 ;

//----------- Mod inverse/Big mod Start here ----------
template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}
//----------- ------------------------------------ ----------

int prime[N] ;
void primeFact()
{
    for (int i = 2 ; i<N ; i++)
    {
        if (prime[i]) continue ;
        for (int j = i ; j<N ; j+=i )
        {
            if (!prime[j]) prime[j] = i ;
        }
    }
}

map <int,int> mp[N] ;
multiset <int> se[N] ;

void _main_main()
{
    ll n , q ; cin >> n >> q ;

    FORN(i,n)
    {
        int x ;cin >> x ;
        while (x!=1)
        {
            mp[i+1][prime[x]]++ ;
            x/=prime[x] ;
        }
        for (auto i : mp[i+1])
        {
            if (i.yy) se[i.xx].insert(i.yy) ;
        }
    }


    ll ans = 1 ;
    FORN(i,N)
    {
        if (se[i].size() <n) continue ;
        // wa2(i , *se[i].begin()) ;
        ans*= bigmod((ll)i,(ll)*se[i].begin(),MOD) ;
        ans%= MOD ;
    }



    while (q--)
    {
        int idx, x ; cin >> idx >> x ;
        map <int,int> mm ;
        while (x !=1)
        {
            mm[prime[x]]++ ;
            x/= prime[x] ;
        }

        // cout << mm << nl ;

        for (auto i : mm)
        {
            int prev = mp[idx][i.xx] ;
            mp[idx][i.xx]+= i.yy ;
            int nn = prev + i.yy ;

            int set_prev = (se[i.xx].size()==n ? *se[i.xx].begin() : 0 ) ;

            // cout << i.xx << "->" << se[i.xx] << nl ;
            // wa2(prev , nn) ;

            if (se[i.xx].find(prev) != se[i.xx].end())
            se[i.xx].erase(se[i.xx].lower_bound(prev)) ;
            se[i.xx].insert(nn) ;

            // cout << i.xx << "->" << se[i.xx] << nl ;

            if (se[i.xx].size()==n && *se[i.xx].begin() > set_prev) {
                ans*= bigmod( (ll)i.xx ,(ll) *se[i.xx].begin()-set_prev ,MOD ) ;
                ans%= MOD ;
            }
        }
        cout << ans << nl ;

    }



}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    primeFact() ;

    int testCase = 1 ;//cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}
