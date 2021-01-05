
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
string s[305] ;
int n ;
int arr[310][310] ;
bool check(int i , int j)
{
    if (i >= 0 &&  i <n  && j>=0 && j<n)
    {
        if (s[i][j] == 'X')
        return true ;
    }
    return false;
}
bool check2(int i , int j)
{
    if (i >= 0 &&  i <n  && j>=0 && j<n)
    {
        if (s[i][j] == 'O')
        return true ;
    }
    return false;
}

void _main_main()
{
    
    cin >> n ; 
    FORN(i,n) cin >> s[i] ;
    MEM(arr, 0) ;

    FORN(i,n) FORN(j,n)
    {
        if (!check(i,j)) continue ;
        if (check(i+1 , j) && check(i+2,j)) arr[i][j]++ ;
        if (check(i+1 , j) && check(i-1,j)) arr[i][j]++ ;
        if (check(i-1 , j) && check(i-2,j)) arr[i][j]++ ;
        if (check(i , j+1) && check(i,j+2)) arr[i][j]++ ;
        if (check(i , j-1) && check(i,j-2)) arr[i][j]++ ;
        if (check(i , j-1) && check(i,j+1)) arr[i][j]++ ;
    }

    FORN(i,n)
    {
        FORN(j,n)
        {
            cout << arr[i][j] << " " ;
        }
        cout << endl ;
    }
    for (int tt = 7 ; tt>0 ; tt--)
    {
        FORN(i,n)
        {
            FORN(j,n)
            {
                if (arr[i][j] == tt)
                {
                    if (  (check2(i+1 , j) && check2(i+2,j)) ) continue ;
                    if (  (check2(i+1 , j) && check2(i-1,j)) ) continue ;
                    if (  (check2(i-1 , j) && check2(i-2,j)) ) continue ;
                    if (  (check2(i , j+1) && check2(i,j+2)) ) continue ;
                    if (  (check2(i , j-1) && check2(i,j-2)) ) continue ;
                    if (  (check2(i , j-1) && check2(i,j+1)) ) continue ;

                    if (check(i+1 , j) && check(i+2,j)) arr[i+1][j]-- , arr[i+2][j]-- ;
                    if (check(i+1 , j) && check(i-1,j)) arr[i+1][j]-- , arr[i-1][j]-- ;
                    if (check(i-1 , j) && check(i-2,j)) arr[i-1][j]-- , arr[i-2][j]-- ;
                    if (check(i , j+1) && check(i,j+2)) arr[i][j+1]-- , arr[i][j+2]-- ;
                    if (check(i , j-1) && check(i,j-2)) arr[i][j-1]-- , arr[i][j-2]-- ;
                    if (check(i , j-1) && check(i,j+1)) arr[i][j-1]-- , arr[i][j+1]-- ;


                    // if (flag == false) continue ;
                    arr[i][j] = 0 ;
                    s[i][j] = 'O' ;
                }
                
            }
        }
    }

    FORN(i,n)
    {
        FORN(j,n)
        {
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
    FORN(i,n) cout << s[i] << endl ;






    
    

}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase = 1 ;cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}
