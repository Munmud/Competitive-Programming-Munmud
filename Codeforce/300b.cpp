/*
          Moontasir Mahmood
        University of Rajshahi
*/
#include <bits/stdc++.h>

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
#define ALLR(V)              V.rbegin(), V.rend()
#define IN(A, B, C)         ((B) <= (A) && (A) <= (C))
//#define AIN(A, B, C)        assert(IN(A, B, C))

#define watch2(x , y)       cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define watch(x)            cout << (#x) << " is " << (x) << endl
#define hitAi               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);ios::sync_with_stdio(0)

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<long long int, long long int>
#define VI                  vector <int>


//cout << fixed << setprecision(20) << p << endl;

template <class T> inline T bigmod(T p,T e,T M){
    ll ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}


/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

/*-----------------------Bitmask------------------*/
//int Set(int N,int pos){return N=N | (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}
/*------------------------------------------------*/



using namespace std;

set <ll> se[49] ;
set<ll> available ,ans[100];
queue <ll> q;
bool visit[49];
ll idx = 0 ;
set <ll> index_of_two ;
set <ll> one;
vector <ll> three ;

void go(ll node )
{

    if (visit[node] == true) return;
        visit[node] = true ;//watch(node) ;

    available.erase(node) ;
    ans[idx].insert(node) ;

    for (auto i:se[node])
        q.push(i) ;
}
int main ()
{
   //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );

    hitAi;
    ll n , x , testCase , m , y   ;
    MEM(visit , false) ;

    cin >> n >> m ;
    FORAB(i,1,n) available.insert(i) ;

    while (m--)
    {
        cin >> x >> y ;
        se[x].insert(y);
        se[y].insert(x) ;
    }

    while (available.size())
    {
        q.push(*available.begin()) ;
        while(q.size())
        {
             go ( q.front() );
             q.pop() ;
        }

        if (ans[idx].size() == 2) {
            index_of_two.insert(idx) ;

        }
        else if ( ans[idx].size() == 1 )
        {
            one.insert( *ans[idx].begin());
        }
        else if (ans[idx].size()==3)
        {
            three.pb(idx) ;
        }
        else {
            cout << -1 << endl ;
            return 0 ;
        }
        idx++ ;
            //watch(idx) ;

    }

    if (index_of_two.size()<=one.size())
    {
        for (auto i : index_of_two )
        {
            ans[i].insert( *one.begin() );
            one.erase( *one.begin() ) ;
            three.push_back(i) ;
        }
    }
    else {
            cout << -1 << endl ;
            return 0 ;
        }

    if (one.size())
    {
        if (one.size()%3 == 0){
            for (auto i : one )
            {
                ans[idx].insert(i);
                if(ans[idx].size() == 3){
                    three.push_back(idx) ;
                    idx++;
                }
            }
        }
        else {
            cout << -1 << endl ;
            return 0 ;
        }
    }









    if (three.size() == n/3)
    {
        for (auto i : three)
        {
            for (auto j : ans[i])
            {
                cout << j << " ";
            }
            cout <<  endl ;
        }
    }
    else cout << -1 << endl ;

    //watch(idx) ;


}
