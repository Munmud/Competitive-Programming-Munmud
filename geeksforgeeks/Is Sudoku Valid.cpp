/*
                     Moontasir Mahmood
          Information And Communication Engineering
                  University Of Rajshahi

                  https://github.com/Munmud
                  moontasir042@gmail.com
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>

#define setinf(ar)          memset(ar,126,sizeof ar)
#define MEM(a, b)           memset ( a, (b), sizeof(a) )
#define CLR(a)              memset(a, 0, sizeof(a))
#define MAX(a, b)           ((a) > (b) ? (a) : (b))
#define MIN(a, b)           ((a) < (b) ? (a) : (b))
#define ABS(X)              ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X)                ( (X) * (X) )
#define SZ(V)               (int )V.size()
#define FORN(i, n)          for(int i = 0; i < n; i++)
#define FORAB(i, a, b)      for(int i = a; i <= b; i++)
#define ALL(V)              V.begin(), V.end()
#define ALLR(V)             V.rbegin(), V.rend()
#define IN(A, B, C)         ((B) <= (A) && (A) <= (C))
#define AIN(A, B, C)        assert(IN(A, B, C))

#define wa2(x , y)          cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define wa(x)               cout << (#x) << " is " << (x) << endl

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<long long int, long long int>
#define VI                  vector <int>
#define VL                  vector <long long int>
#define BOUNDARY(i, j, row , column)      ((i >= 0 && i < row) && (j >= 0 && j < column))
#define max3(x, y, z)       MAX(MAX(x, y), MAX(y, z))

#define sf(a)               scanf("%lld",&a)
#define sff(a,b)            scanf("%lld %lld", &a , &b)
#define pf(a)               printf("%lld\n",a)
#define pff(a,b)            printf("%lld %lld\n", a , b)

#define front_zero(n)       __builtin_clzll(n)
#define back_zero(n)        __builtin_ctzll(n)
#define total_one(n)        __builtin_popcountll(n)

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> new_data_set; 

// new_data_set p; 
//p.insert(5);
//p.insert(2);
//p.insert(6);
//p.insert(4);
// p.find_by_order(3); // 6
// p.order_of_key(7) //4

#define SIZE                (int)5005
#define MOD                 1000000007
int arr[10][10] ;

bool row_ok(int i)
{
    int sz[10] ;
    MEM(sz , 0) ;
    FORN(j,9){
        if (!arr[i][j]) continue ;
        if ( sz[arr[i][j]] ) return false ;
        sz[arr[i][j]] = 1 ;
    }
    return true ;
}
bool col_ok(int j)
{
    int sz[10] ;
    MEM(sz , 0) ;
    FORN(i,9){
        if (!arr[i][j]) continue ;
        if ( sz[arr[i][j]] ) return false ;
        sz[arr[i][j]] = 1 ;
    }
    return true ;
}
bool box_ok(int i ,int j)
{
    int sz[10] ;
    MEM(sz , 0) ;
    FORAB(p , i , i+2) FORAB(q , j , j+2){
        if (!arr[p][q]) continue ;
        if ( sz[arr[p][q]] ) return false ;
        sz[arr[p][q]] = 1 ;
    }
    return true ;

}

void letsGetStarted()
{
    
    FORN(i,9)FORN(j,9)cin >> arr[i][j] ;
    FORN(i,9) {
        if (!row_ok(i)){
            cout << 0 << endl ;
            return ;
        }
    }
    // cout << "row ok" << endl ;
    FORN(i,9) {
        if (!col_ok(i)){
            cout << 0 << endl ;
            return ;
        }
    }
    // cout << "col ok" << endl ;
    for(int i = 0 ; i<9 ; i+=3){
        for (int j = 0 ; j<9 ; j+=3){
            if (!box_ok(i,j)){
            cout << 0 << endl ;
            return ;
        }

        }
    }
    // cout << "box ok" << endl ;
    cout << 1 << endl ;
    return ;
    

    

}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int testCase = 1 ;cin >> testCase ;
    for (int i = 0; i < testCase; i++)
        letsGetStarted() ;
}
