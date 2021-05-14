 
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
const int N = 1e6+500 ;
const int B = 29 ;
 
 
template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}
 
struct HASHING{
    ll MOD ;
    int N ,B ;
    vector <int> hash , inv ;
    int n ;
 
    HASHING(int _N , int _B , ll _M){
        N = _N ;
        B = _B ;
        MOD = _M ;
        hash.resize(N) ;
        inv.resize(N) ;
 
        inv[0] = 1, inv[1] = modinverse((ll)B, MOD);
        for (int i = 2; i < N; ++i) inv[i] = inv[i - 1] * 1LL * inv[1] % MOD;
    }
 
    inline int range(int l , int r)
    {
        int ret = (hash[r + 1] - hash[l]) * 1ll * inv[l] % MOD;
        if (ret < 0) ret += MOD;
        return ret;
    }
 
    void gen(string &t)
    {
        n = t.size();
        int power = 1;
 
        for (int i = 0; i < n; ++i)
        {
            hash[i + 1] = (hash[i] + power * 1ll * (t[i]  - 'a' + 1)) % MOD;
            power = power * 1ll * B % MOD;
        }
    }
 
}*h1 ,*h2;
 
 
struct dat{
    int  len , cntR ;
 
    dat( int _len , int _cntR ) : len(_len) , cntR(_cntR) {}
    dat(){}
    dat(string &s){
        cntR = 0 ;
        for (auto & ch : s){
            ch = tolower(ch) ;
            cntR+= ch == 'r' ;
        } 
        h1->gen(s) ;
        len = s.size() ;
    }
};
 
unordered_map<int,dat> arr ;
unordered_map<int,bool > vis ;
unordered_map<int, int > memo ;
unordered_map<int,set<int> > mp ;
unordered_map<int,set<int> > Rmp ;
unordered_map<int, int > SccIdx ;
 
stack <int> st ;
void go(int node){
    vis[node] = 1 ;
    for (auto i : mp[node]){
        if (!vis[i]) go(i) ;
    }
    st.push(node) ;
}
 
 
bool check(int has1 , int has2){
    auto it = arr.find(has1) ;
    auto ir = arr.find(has2) ;
 
    if (it->yy.cntR < ir->yy.cntR) return true ;
    else if (it->yy.cntR == ir->yy.cntR && it->yy.len < ir->yy.len) return true ;
    return false ;
}
 
VI Scc ;
vector <VI> SccGroup ;
int mn ;
void fin(int node){
    
    vis[node] = 0 ;
 
    if (mn == -1) mn = node ;
    else if (check(node,mn)) mn = node ;
    
    Scc.emplace_back(node) ;
    for (auto i : Rmp[node]){
        if (vis[i]) fin(i) ;
    }
}


int dp(int node){

}
 
void _main_main()
{
    ll n, m, id1 , id2, len = 0 , cnt = 0, id ;
    string s,s1,s2 ;
    vector<int> v ;
 
    h1 = new HASHING(N,B,MOD) ;
 
    cin >> n ;
    FORN(i,n){
        cin >> s ;
        dat dt = dat(s) ;
        id = h1->range(0,s.size()-1) ;
        arr[id] = dt ;
        v.emplace_back(id) ;
    }
 
    cin >> m ;
    FORN(i,m){
        cin >> s1 >> s2 ;
 
        dat p1 = dat(s1) ;
        id1 = h1->range(0 , s1.size()-1) ;
 
        dat p2 = dat(s2) ;
        id2 = h1->range(0 , s2.size()-1) ;
 
        arr[id1] = p1 ;
        arr[id2] = p2 ;
 
        mp[id1].insert(id2) ;
        Rmp[id2].insert(id1) ;
 
    }
 
    for (auto i : arr){
        vis[i.xx] = false ;
        memo[i.xx] = -1 ;
    }
 
    for (auto & i : v) if(!vis[i]) go(i) ;

    
    VI mnArray ;
    while (!st.empty()){
        id = st.top() ; st.pop() ;
        if (vis[id]){
            Scc.clear() ;
            mn = -1 ;
            fin(id) ;
            SccGroup.emplace_back(Scc) ;
            mnArray.emplace_back(mn) ;
            for (auto i : Scc) SccIdx[i] = SccGroup.size()-1 ;
        }
    }

    // cout << mnArray << nl ;

    for(int i = SccGroup.size()-1 ; i>=0 ; i--){
        for (auto j : SccGroup[i]){
            for (auto k : mp[j]){
                // wa2(j,k) ;
                int idxJ = SccIdx[j] ;
                int idxK = SccIdx[k] ;
                if(check(mnArray[idxK] , mnArray[idxJ])) mnArray[idxJ] = mnArray[idxK] ;
            }
        }
    }

    // FORN(i,SccGroup.size()){
    //     cout << SccGroup[i] << nl ;
    //     wa(mnArray[i]) ;
    // }

    // cout << mnArray << nl ;

 
    for (auto i : v){
        id = i ;
        if (SccIdx.count(i)){
            id = mnArray[SccIdx[i]] ;
        }
        auto it = arr.find(id) ;
        cnt+= it->yy.cntR ;
        len+= it->yy.len ;
    }
 
    cout << cnt << " " << len << nl ;
 
 
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