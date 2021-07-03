
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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>

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

using namespace __gnu_pbds;
using namespace std;

/*----------------------Policy Based Data Structures in g++----------------*/
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> new_data_set; 

// new_data_set p; 
//p.insert(5);
//p.insert(2);
//p.insert(6);
//p.insert(4);
// p.find_by_order(3); // 6
// p.order_of_key(7) //4
/*---------------------------------- x ------------------------------------*/

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


class Solution {
    string ans ;
public:
string vec(vector <int> & v , int k)
    {
        string tt ;
        if (k == 0) return tt ;
        for(int i = 0; i < v.size(); i++)
        {
            while (tt.size() && tt[tt.size()-1] < v[i]+48 && (tt.size()-1 + v.size()-i >=k))
            {
                tt.pop_back() ;
            }
            if (tt.size()!=k)
            tt+= v[i]+48 ;
        }
        return tt ;
    }
    string res(string &a , string &b , int i , int j)
    {
        if (i!=a.size() && j!= b.size()){
            if (a[i] == b[j]){
                string s1 = res(a,b,i+1 , j) ;
                string s2 = res(a,b ,i , j+1) ;
                return (s1 < s2 ? a[i]+s2 : a[i]+s1) ;
            }
            else if (a[i] > b[j])
                return a[i] + res(a,b,i+1,j) ;
            else return b[j] + res(a,b,i,j+1) ;
        }
        else if (i!=a.size()) return a[i] + res(a,b,i+1,j) ;
        else if (j!=b.size()) return b[j] + res(a,b,i,j+1) ;
        return "" ;
    }
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        if (k == 0) return {} ;
        for (int i = 0 ; i<=nums1.size() ; i++)
        {
            if ( k-i <= nums2.size()){
                string a = vec(nums1,i) ; 
                string b = vec(nums2 , k-i) ;
                // cout << a  << " " << b << endl ;
                string c = res(a,b , 0 , 0)   ;
                if (c> ans) ans = c ;
            }
        }
        vector <int> ttt ;
        for (int i = 0 ; i<ans.size() ; i++) ttt.push_back(ans[i]-48) ;
        // cout << ttt<< endl ;
        return ttt ;
    }
};

void _main_main()
{
    Solution ss ;
    vector <int> a {6,3,1,7,6,6,1,4,7,8,4,1,4,6,1,0,8,9,6,2,3,1,5,4,9,5,4,2,1,7,7,1,4,0,6,2,8,6,2,4,9,8,5,5,5,1,3,5,4,2,3,8,4,1,1,1,0,9,6,7,2,3,8,9,0,3,3,4,6,3,7,7,0,7,9,7,2,8,8,9,8,0,8,2,1,9,8,0,8,4} , b{6,4,1,5,0,8,7,6,3,2,7,7,4,1,1,5,3,5,5,9,2,2,0,8,0,5,7,3,9,9,1,2,2,4,2,7,4,5,1,5,6,4,7,5,5,0,0,9,7,3,4,2,3,1,6,8,9,8,3,7,2,8,5,8,5,4,4,7,6,8,1,0,0,5,7,9,5,1,6,8,9,7,8,6,8,6,7,5,2,7} ;
    vector <int > c = ss.maxNumber(a , b ,90);
    cout << c << endl ;

}

// [6,3,1,7,6,6,1,4,7,8,4,1,4,6,1,0,8,9,6,2,3,1,5,4,9,5,4,2,1,7,7,1,4,0,6,2,8,6,2,4,9,8,5,5,5,1,3,5,4,2,3,8,4,1,1,1,0,9,6,7,2,3,8,9,0,3,3,4,6,3,7,7,0,7,9,7,2,8,8,9,8,0,8,2,1,9,8,0,8,4]
// [6,4,1,5,0,8,7,6,3,2,7,7,4,1,1,5,3,5,5,9,2,2,0,8,0,5,7,3,9,9,1,2,2,4,2,7,4,5,1,5,6,4,7,5,5,0,0,9,7,3,4,2,3,1,6,8,9,8,3,7,2,8,5,8,5,4,4,7,6,8,1,0,0,5,7,9,5,1,6,8,9,7,8,6,8,6,7,5,2,7]
// 90

// [3,4,8,9,3,0]
// [6,1,9,1,1,2]
// 6

// [2,5,6,4,4,0]
// [7,3,8,0,6,5,7,6,2]
// 15



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
