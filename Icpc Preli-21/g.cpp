
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
const int N = 1000000+100 ;






/* ------------- trie tree start here-------------------*/

// initiall 'a-z' is considered 
const int ALPHABET_SIZE = 26; 

struct node {
    bool endmark;
    node* next[ALPHABET_SIZE + 1];
    node()
    {
        endmark = false;
        for (int i = 0; i < ALPHABET_SIZE; i++)
            next[i] = NULL;
    }
} * root;

void inst(string str)
{
int len = str.size() ;
    node* curr = root;
    for (int i = 0; i < len; i++) {
        int id = str[i] - 'a';
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        curr = curr->next[id];
    }
    curr->endmark = 1;
}

void del(node* cur)
{
    for (int i = 0; i < ALPHABET_SIZE; i++)
        if (cur->next[i])
            del(cur->next[i]);
    delete (cur);
}
/* ------------- trie tree end here-------------------*/

string s ;
int vis[N] ;
int uu[N] , vv[N] ;

int res ;
void go(int st , int pos , node * curr , int tt)
{
    // wa2(st,pos) ;
    if (pos == SZ(s)){
        if (curr->endmark){
            res = MIN(tt,res) ; 
            if (vv[st] == -1) vv[st] = tt ;
            else vv[st] = MIN(vv[st] , tt) ;
            
        }
        return ;
    }

    int id = s[pos] - 'a' ;
    
    if (curr == root){
            // cout << "HAHAHA" ;
        
        if (vis[pos] ==0){
            vis[pos] = 1 ;
            uu[pos] = tt ;
        }
        else if (uu[pos] !=-1 && vv[pos]!= -1){
            res = MIN(tt + vv[pos]-uu[pos] , res) ;
            if (tt < uu[pos] && curr->next[id] ) {
                go(st,pos+1 , curr->next[id] , tt) ;
            }
            // cout << "HAHAHA" ;
            return ;
        }
        else{
            // cout << "HAHAHA" ;
            return ;
        } 
    }

    if (curr->next[id] ) {
        go(st,pos+1 , curr->next[id] , tt) ;
    }
    if (curr->endmark){
        go(pos,pos , root , tt+1) ;
    }

}

void _main_main()
{
    ll n  ; cin >> n ;

    root = new node() ;
    res = INT_MAX ;
    FORN(i,n){
        cin >> s ;
        inst(s) ;
    }

    MEM(vis,0) ;
    MEM(uu,-1) ;
    MEM(vv,-1) ;

    cin >> s ;
    go(0,0 , root , 1) ;
    if (res != INT_MAX) cout << res << nl ;
    else cout << "impossible" << nl ;
    del(root) ;
}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        cout << "Case " << i+1 << ": " ;
        _main_main() ;
    }
        
}
