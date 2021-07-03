
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

int inv[N] ;
struct HASHING{
    ll MOD ;
    int N ,B ;
    vector <int> hash ;
    int n ;

    HASHING(int _N , int _B , ll _M){
        N = _N ;
        B = _B ;
        MOD = _M ;
        hash.resize(N) ;
    }

    inline int range(int l , int r)
    {
        // if(l>r) cout << "WRONG" << l << " " <<  r <<  nl ;
        if(r>n) cout << "WRONG2 " << l << " " <<  r  << " " << n <<  nl ;
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
            hash[i + 1] = (hash[i] + power * 1ll * (t[i] - 'a' + 1)) % MOD;
            power = power * 1ll * B % MOD;
        }
    }

};

vector <string> s(3) ;
vector<HASHING *> h(3) ;

int go(int id1 , int id2 , int id3){
    int sz1 = s[id1].size() ;
    int sz2 = s[id2].size() ;
    int sz3 = s[id3].size() ;

    int hi = sz1 ;
    int idx = sz1 ;
    bool flag = false ;

    for (int i = 0 ; i<sz1 ; i++)
    {
        int len = MIN(sz2 , sz1-i) ;
        if (h[id1]->range(i,i+len-1) == h[id2]->range(0,len-1)){
            hi = MAX(hi , i+sz2) ;
            idx = i ;
            flag = true ;
            break ; 
        }
    }
    if (!flag) hi += sz2 ;
    flag = false ;
    // wa3(sz1 , sz2 , sz3) ;
    // wa(hi) ;
    // wa(idx) ;


    for (int i = 0 ; i<hi ; i++)
    {
        int len = MIN(sz3 , hi - i) ;
        if (i<idx){
            int len1 = MIN( idx-i , len )  ;
            int len2 = len - len1 ;
            // wa3(len,len1 , len2) ;
            // wa4(i,idx-1,0 , len1-1) ;
            if (h[id1]->range(i,idx-1) == h[id3]->range(0 , len1-1)){
                // wa4(0,len2-1,len1 , len-1) ;
                if (len2 && h[id2]->range(0,len2-1) != h[id3]->range(len1 , len-1)) continue ;
                else{
                    hi = max(hi , i + sz3) ;
                    flag = true ;
                    break ;
                }
            }
        }
        else {
                // wa4(i,len,idx,hi) ;
                // wa4(0 + i-idx ,i-idx+len-1,0 , len-1) ;
            if (hi-idx>sz2){
                if (h[id1]->range(i ,i+len-1) == h[id3]->range(0 , len-1)){
                    hi = max(hi , i+sz3) ;
                    flag = true ;
                    break ;
                }
            }
            else if (h[id2]->range(i-idx ,i-idx+len-1) == h[id3]->range(0 , len-1)){
                hi = max(hi , i+sz3) ;
                    flag = true ;
                break ;
            }
        }
    }
    if (!flag) hi += sz3 ;
    // wa(hi) ;
    return hi ;

}







void _main_main()
{
    ll n  ;

    FORN(i,3){
        cin >> s[i] ;
        h[i] = new HASHING(s[i].size()+5 , B , MOD) ;
        h[i]->gen(s[i]) ;
    } 

    int arr[] = { 0, 1, 2 };
    int res = INT_MAX ;
    do {
        res = MIN( go( arr[0],   arr[1] ,arr[2]) , res) ;
    } while (next_permutation(arr, arr + 3));

    cout << res << nl ;



}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    inv[0] = 1, inv[1] = modinverse((ll)B, MOD);
    for (int i = 2; i < N; ++i) inv[i] = inv[i - 1] * 1LL * inv[1] % MOD;

    int testCase = 1 ;//cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}
