
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
const int N = 1e5+10 ;
const int B = 29 ;

template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

int inv[5] , power[5] ;
struct HASHING{
    ll MOD ;
    int N ,B ;
    vector <int> hash  ;
    int n ;

    HASHING(int _N , int _B , ll _M){
        N = _N ;
        B = _B ;
        MOD = _M ;
        hash.resize(N) ;
    }

    inline int range(int l , int r)
    {
        int ret = (hash[r + 1] - hash[l]) * 1ll * inv[l] % MOD;
        if (ret < 0) ret += MOD;
        return ret;
    }

    int gen(string &t)
    {
        n = t.size();

        for (int i = 0; i < n; ++i)
        {
            hash[i + 1] = (hash[i] + power[i] * 1ll * ( t[i] == '_' ? 27 : t[i] - 'a' + 1)) % MOD;
           
        }
        return hash[n] ;
    }

}*h1 ,*h2;

/*-----------------------Bitmask------------------*/
int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}
/*------------------------------------------------*/
bool flag  ;

// int mem[N] ;
int vis[N] ;
vector <int> g[N] ;
stack<int> st ;

void go(int node)
{
    vis[node] = 1 ;
    // wa(node) ;
    for (auto i : g[node]){
        // wa(i) ;
        if (vis[i] == 1) flag = false   ;
        else if (vis[i] == 0) go(i) ;
    }
    vis[node] = 2 ;
    st.push(node) ;
}

void _main_main()
{
    ll n , m , k ;
    cin >> n >> m >> k ;
    h1 = new HASHING(k+5 , B , MOD) ;
    flag = true; 


    map<int,int> mp ;
    
    FORN(i,n)
    {
        string s ; cin >> s ;
        mp[h1->gen(s)] = i+1 ;
    }

    vector <int> num(m) ;
    set <int> idx[m] ;

    

    int limit = 1 <<k ;
    FORN(i,m){
        string s ;
        cin >> s >> num[i] ;

        set <int> se ;

        FORN(j,limit){
            string ss = s ;
            FORN(p,k) if(check(j,p)) ss[p] = '_' ;
            int id = h1->gen(ss) ;
            if (mp.count(id)) se.insert(mp[id]) ;
        }

        // cout << se << nl ;

        auto it = se.find(num[i]) ;
        if ( it == se.end())flag = false ;
        else se.erase(it) ;

        for (auto j : se) g[num[i]].emplace_back(j) ;
        
    }
    // wa(flag) ;

    // FORN(i,n){
    //     wa(i+1) ;
    //     cout << g[i] << nl ;
    // }

    FORAB(i,1,n) if (vis[i] == 0) go(i) ;

    if (flag){
        cout << "YES" << nl ;
        while(!st.empty()){
            cout << st.top() << " " ;
            st.pop() ;
        }
    }
    else cout << "NO" << nl ;
    






}




int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    inv[0] = 1, inv[1] = modinverse((ll)B, MOD);
    power[0] = 1 ;   power[1] = power[0] * 1ll * B % MOD; 
    for (int i = 2; i < 5; ++i){
        inv[i] = inv[i - 1] * 1LL * inv[1] % MOD;
        power[i] = power[i-1] *1ll * B %MOD ;
    } 

    int testCase = 1 ;//cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}
