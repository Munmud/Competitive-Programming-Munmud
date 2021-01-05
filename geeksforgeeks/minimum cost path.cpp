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
// 2122219134  9114861777597660798
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

const int fx[]={+1,-1,+0,+0};
const int fy[]={+0,+0,+1,-1};

struct node
{
    int x , y,cost ;
    node( int _cost , int _x , int _y )
    {
        x = _x ;
        y = _y ;
        cost = _cost ;
    }

    bool operator < (const node & p) const{
        return cost > p.cost ;
    }

};

void letsGetStarted()
{
    int n  ;
    cin >> n ;
    ll dist[n+5][n+5] , v[n+5][n+5] ;
    setinf(dist) ;
    FORN(i,n) FORN(j,n) cin >> v[i][j] ;

    dist[0][0] = v[0][0] ;
    priority_queue< node > q ;
    q.push(node(v[0][0],0,0)) ;

    // q.push(node(5,0,0)) ;
    // q.push(node(8,0,0)) ;
    // q.push(node(10,0,0)) ;

    // while (!q.empty())
    // {
    //     cout << q.top().cost << " " ;
    //     q.pop();
    // }
    // cout << endl ;
    


    while(!q.empty())
    {
        int x = q.top().x ;
        int y = q.top().y ;
        int cost = q.top().cost ;
        q.pop() ;

        if (dist[x][y] > cost) continue ;
        if (x == n-1 && y == n-1) continue ;

        FORN(i,4){
            int xx = x + fx[i] ;
            int yy = y + fy[i] ;
            if (BOUNDARY(xx,yy,n,n)){
                if (dist[xx][yy] > dist[x][y] + v[xx][yy]){
                    dist[xx][yy] = dist[x][y] + v[xx][yy] ;
                    q.push( node(dist[xx][yy],xx,yy) ) ;
                }
            }
        }
    }

    cout << dist[n-1][n-1] << endl ;


    

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
