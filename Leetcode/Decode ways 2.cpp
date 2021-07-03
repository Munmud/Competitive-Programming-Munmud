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


int numDecodings(string s) {
    int n = s.size() ;
    int arr[n+5]  ;
    arr[0] = 1 ;
    
    if (s[0] == '*' ) arr[1] = 9 ;
    else arr[1] = 1 ;
    
    for (int i = 2 ; i<=n ; i++)
    {
        string ss = s.substr(i-2 , 2) ;
        if(ss[1] == '*'){
            // wa(ss) ;
            if(ss[0] =='1') arr[i] = arr[i-1]*9 + arr[i-2] * 9 ;
            else if (ss[0] == '2') arr[i] = arr[i-1] * 9 + arr[i-2] * 6 ;
            else if (ss[0] == '*') arr[i] = arr[i-1] * 9 + arr[i-2] * 15 ;
            else arr[i] = arr[i-1] * 9 ;
        }
        else if (ss[0] == '*'){
            if (ss[1] == '0') arr[i] = arr[i-2] * 2 ;
            else if (ss[1] >='1' && ss[1] <='6') arr[i] = arr[i-1] + arr[i-2]*2 ;
            else arr[i] = arr[i-1] ;
        }
        else if (ss == "10" || ss == "20") arr[i] = arr[i-2] ;
        else if (ss >="11" && ss <= "26") arr[i] = arr[i-1] + arr[i-2] ;
        else if (ss >= "01" && ss <= "09" ) arr[i] = arr[i-1] ;
        else if (ss >= "27" && ss <= "99") arr[i] = arr[i-1] ;
    }
    return arr[n] ;

}


void letsGetStarted()
{
    int n  ;
    n = numDecodings("12**610") ;
    cout << n << endl ;
    

}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int testCase = 1 ;//cin >> testCase ;
    for (int i = 0; i < testCase; i++)
        letsGetStarted() ;
}
