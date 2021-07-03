#include <bits/stdc++.h>

#define MEM(a, b)           memset(a, (b), sizeof(a))
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
#define hitAi               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<long long int, long long int>
#define VI                  vector <int>

using namespace std;

int main ()
{
    hitAi;
    ll n , x , testCase , mx = LONG_LONG_MIN ;
    //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );
    cin >> n ;

    vector<ll> v;
    vector <ll> :: iterator it;

    FORN(i,n)
    {
        cin >> x ;
        mx = MAX(mx , x);
       v.push_back(x) ;
    }
    sort(ALL(v));

    bool check[v.size()+1];
    MEM( check , false ) ;
    //for(it=s.begin() ; it!=s.end() ; it++)
        //watch(*it);

    //ll limit = sqrt(mx*1.)+2;

   for( int i = 1 ; i*i <= mx ; i++ )
    {

        if (mx%i==0)
        {
            if (i*i==mx){
                it = lower_bound(v.begin() , v.end() , i);
                check[ ABS( distance(v.begin () , it) ) ] = true ;
            }
            else{
                it = lower_bound(v.begin() , v.end() , i);
                //watch(*it);
                check[ ABS( distance(v.begin () , it) ) ] = true ;
                it = lower_bound(v.begin() , v.end() , mx/i);
                //watch(*it);
                check[ ABS( distance(v.begin () , it) ) ] = true ;
            }

        }
    }


    //watch(mx);

    ll ch = v.size() , t;
    while(ch--)
    {
        t=ch;
        //watch(t);
        if (check[t]==false) break;
    }



    cout << mx << " " << v[t] << endl;



}
