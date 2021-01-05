#include <bits/stdc++.h>
using namespace std ;

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

class Solution {
public:
    int maximumRequests(int n, vector<vector<int>>& req) {
        vector < pair<int, int> > v;
        int ans = 0 , mx = 0 ;
        
        for (auto vec : req){
            if (vec.front() == vec.back()) ans++ ;
            else v.push_back({vec.front(),vec.back()}) ;
        }
        
        int sz = v.size() ;
        int limit = (1 << sz) ;
        
        
        for (int st = 1 ; st < limit ; st++ )
        {
            vector <int> in(n , 0) , out(n ,0) ;
            for (int i = 0 ; i<sz ; i++){
                if (st & (1 << i)){
                    out[v[i].first]++ ;
                    in[v[i].second]++ ;
                }
            }
            
            int cnt = 0 ;
            int p = 0 ;
            for (int i = 0 ; i<n ; i++)
            {
                if (in[i] == out[i] && in[i] >0) cnt++ ;
                if (in[i] > 0 ) p++ ;
            }
            
            if ( p == cnt) mx = max(mx , __builtin_popcount(st) ) ;
        }
        
        return ans + mx ;
        
        
    }
};

int main ()
{
    vector<vector<int>> req{{0,1},{1,0},{0,1},{1,2},{2,0},{3,4}} ;
    Solution p ;
    cout<< p.maximumRequests(5 , req ) << endl ;

}