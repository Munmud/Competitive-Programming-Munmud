
/***
 *                                ╔╦╗╔═╗╔═╗╔╗╔╔╦╗╔═╗╔═╗╦╦═╗  ╔╦╗╔═╗╦ ╦╔╦╗╔═╗╔═╗╔╦╗ 
 *                                ║║║║ ║║ ║║║║ ║ ╠═╣╚═╗║╠╦╝  ║║║╠═╣╠═╣║║║║ ║║ ║ ║║ 
 *                                ╩ ╩╚═╝╚═╝╝╚╝ ╩ ╩ ╩╚═╝╩╩╚═  ╩ ╩╩ ╩╩ ╩╩ ╩╚═╝╚═╝═╩╝ 
 *    ╦╔╗╔╔═╗╔═╗╦═╗╔╦╗╔═╗╔╦╗╦╔═╗╔╗╔  ╔═╗╔╗╔╔╦╗  ╔═╗╔═╗╔╦╗╔╦╗╦ ╦╔╗╔╦╔═╗╔═╗╔╦╗╦╔═╗╔╗╔  ╔═╗╔╗╔╔═╗╦╔╗╔╔═╗╔═╗╦═╗╦╔╗╔╔═╗ 
 *    ║║║║╠╣ ║ ║╠╦╝║║║╠═╣ ║ ║║ ║║║║  ╠═╣║║║ ║║  ║  ║ ║║║║║║║║ ║║║║║║  ╠═╣ ║ ║║ ║║║║  ║╣ ║║║║ ╦║║║║║╣ ║╣ ╠╦╝║║║║║ ╦ 
 *    ╩╝╚╝╚  ╚═╝╩╚═╩ ╩╩ ╩ ╩ ╩╚═╝╝╚╝  ╩ ╩╝╚╝═╩╝  ╚═╝╚═╝╩ ╩╩ ╩╚═╝╝╚╝╩╚═╝╩ ╩ ╩ ╩╚═╝╝╚╝  ╚═╝╝╚╝╚═╝╩╝╚╝╚═╝╚═╝╩╚═╩╝╚╝╚═╝ 
 *                            ╦ ╦╔╗╔╦╦  ╦╔═╗╦═╗╔═╗╦╔╦╗╦ ╦  ╔═╗╔═╗  ╦═╗╔═╗ ╦╔═╗╦ ╦╔═╗╦ ╦╦ 
 *                            ║ ║║║║║╚╗╔╝║╣ ╠╦╝╚═╗║ ║ ╚╦╝  ║ ║╠╣   ╠╦╝╠═╣ ║╚═╗╠═╣╠═╣╠═╣║ 
 *                            ╚═╝╝╚╝╩ ╚╝ ╚═╝╩╚═╚═╝╩ ╩  ╩   ╚═╝╚    ╩╚═╩ ╩╚╝╚═╝╩ ╩╩ ╩╩ ╩╩ 
 *                                          https://github.com/Munmud 
 *                                           moontasir042@gmail.com 
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

#define SIZE                (int)5005
#define MOD                 1000000007



#define mx 100001
ll arr[mx];
struct info
{
    ll mn , cnt ;
}tree[mx * 3];

void init(int node, int b, int e)
{
    if (b == e) {
        tree[node].mn = arr[b];
        tree[node].cnt = 1 ;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);

    if (tree[Left].mn == tree[Right].mn){
        tree[node].cnt = tree[Left].cnt + tree[Right].cnt;
    }
    else if (tree[Left].mn < tree[Right].mn){
        tree[node].cnt = tree[Left].cnt;
    }
    else tree[node].cnt = tree[Right].cnt;
    tree[node].mn = min( tree[Left].mn , tree[Right].mn );
}

// i থেকে j তম (ইনক্লুসিভ) sum বের করি
PII query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b) return {INT_MAX,0}; 
    if (b >= i && e <= j) return {tree[node].mn , tree[node].cnt}; 
        
    int Left = node * 2; 
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    PII p1 = query(Left, b, mid, i, j) ;
    PII p2 = query(Right, mid + 1, e, i, j) ;
    PII p3 ;

    if (p1.xx == p2.xx){
        p3.yy = p1.yy + p2.yy;
    }
    else if (p1.xx < p2.xx){
        p3.yy = p1.yy;
    }
    else p3.yy = p2.yy;
    p3.xx = min( p1.xx , p2.xx );

    return  p3 ; 
}

// i তম ইনডেক্সের ভ্যালু চেঞ্জ করে newvalue রাখি
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b) return; 
    if (b >= i && e <= i) { 
        tree[node].mn = newvalue; 
        return;
    }
    int Left = node * 2; 
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);

    if (tree[Left].mn == tree[Right].mn){
        tree[node].cnt = tree[Left].cnt + tree[Right].cnt;
    }
    else if (tree[Left].mn < tree[Right].mn){
        tree[node].cnt = tree[Left].cnt;
    }
    else tree[node].cnt = tree[Right].cnt;
    tree[node].mn = min( tree[Left].mn , tree[Right].mn );
}


void _main_main()
{
    int n ,m ;
    cin >> n >> m ;
    FORAB(i,1,n) cin >> arr[i] ;
    init(1,1,n) ;
    while (m--)
    {
        int a , b , c ;
        cin >> a >> b >> c ;
        if (a== 1){
            update(1,1,n,b+1,c) ;
        }
        else {
            PII pp = query(1,1,n,b+1 , c) ;
            cout << pp.xx << " " << pp.yy << "\n" ;
        }
    }
    


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
