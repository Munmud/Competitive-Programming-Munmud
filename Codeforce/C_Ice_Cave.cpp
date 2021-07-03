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
//#define AIN(A, B, C)        assert(IN(A, B, C))

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
#define BOUNDARY(i, j , row , column)      ((i >= 0 && i < row) && (j >= 0 && j < column))
#define max3(x, y, z)       MAX(MAX(x, y), MAX(y, z))

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

// dest x hole 1 bar visit korle hbe...
// r na hole 1 ta incrack neibor cell lagbe destination page e

/*----------------------Graph Moves----------------*/
const int fx[]={+1,-1,+0,+0};
const int fy[]={+0,+0,+1,-1};
// const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
// const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
// const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
// const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

void letsGetStarted()
{
    int n ,m ;
    cin >> n >> m ;
    string s[n+1] ;
    FORN(i,n) cin >> s[i] ;
    int x1 , y1, x2 , y2 ;
    cin >> x1 >> y1 >> x2 >> y2 ;
    x1-- ;
    y1-- ;
    x2-- ;
    y2-- ;
    if (x1==x2 && y1==y2){
        FORN(i,4){
            if (BOUNDARY(x1 + fx[i] , y1 + fy[i] , n , m) && s[x1+fx[i]][y1+fy[i]]=='.') 
            {
                cout << "YES" << endl ;
                return ;
            }
        }
        cout << "NO" << endl ;
        return ;
        

    }

        queue <PII> q ;
        q.push ({x1,y1}) ;

    while (!q.empty()){
        PII p = q.front() ;
        q.pop() ;

        if ( !(p.xx==x1 && p.yy==y1) && s[p.xx][p.yy] == 'X') continue ;

        s[p.xx][p.yy] = 'X' ;

        FORN(i,4) {
            if (p.xx + fx[i] == x2 && p.yy + fy[i] == y2){
                if (s[x2][y2] == 'X') {
                    cout << "YES" << endl ;
                }
                else {
                        FORN(i,4){
                            if (BOUNDARY(x2 + fx[i] , y2 + fy[i] , n , m)) 
                            {
                                if ( s[x2+fx[i]][y2+fy[i]]=='.') {
                                    cout << "YES" << endl ;
                                    return ;
                                }
                                
                            }  
                        }
                        cout << "NO" << endl ;
                }
                return ;
            }
            if (BOUNDARY(p.xx+fx[i] , p.yy+fy[i] , n , m)){
                if (s[p.xx + fx[i]][p.yy+fy[i]] == '.'){
                    q.push( { p.xx+fx[i] , p.yy+fy[i] } );
                }
            }
                
        }

    }

    cout << "NO" << endl ;
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
