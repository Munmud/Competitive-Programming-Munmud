
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
int arr[mx];
struct info {
    ll prop, sum;
} tree[mx * 3]; //sum ছাড়াও নিচে অতিরিক্ত কত যোগ হচ্ছে সেটা রাখবো prop এ

// i থেকে j তম ইনডেক্সের ভ্যালু চেঞ্জ করে newvalue রাখি
void update(int node, int b, int e, int i, int j, int newvalue)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j) //নোডের রেঞ্জ আপডেটের রেঞ্জের ভিতরে
    {
        // wa2(b,e) ;
        // wa(newvalue) ;
        // tree[node].sum += ((e - b + 1) * newvalue); //নিচে নোড আছে e-b+1 টি, তাই e-b+1 বার newvalue যোগ হবে এই রেঞ্জে
        tree[node].prop += newvalue; //নিচের নোডগুলোর সাথে newvalue যোগ হবে
        // wa2(node , newvalue) ;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, newvalue);
    update(Right, mid + 1, e, i, j, newvalue);
    // tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
    //উপরে উঠার সময় পথের নোডগুলো আপডেট হবে
    //বাম আর ডান পাশের সাম ছাড়াও যোগ হবে নিচে অতিরিক্ত যোগ হওয়া মান
}


// i থেকে j তম (ইনক্লুসিভ) sum বের করি
ll query(int node, int b, int e, int i, int j, int carry )
{
    // wa(node) ;
    if (i > e || j < b)
        return 0;

    if (b == i && e == j){
        // wa2(b,e) ;
    return  carry  + tree[node].prop; 
    }
        

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;

    ll p1 = query(Left, b, mid, i, j, carry + tree[node].prop); //প্রপাগেট ভ্যালু বয়ে নিয়ে যাচ্ছে carry ভ্যারিয়েবল
    ll p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}


void _main_main()
{
    int n , m ;
    cin >> n >> m ;
    while (m--)
    {
        int cmd ; cin >> cmd ;
        if (cmd == 1){
            int x , y , val ;
            cin >> x >> y >> val ;
           update(1,1,n,x+1,y , val) ;
        }
        else {
            int idx ;
            cin >> idx ;
            cout << query(1,1,n,idx+1,idx+1 , 0) << endl ; ;
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
