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

ll n , x , testCase , ans = 0 , sum = 0 , a , b , c , count = 0 ;
    //freopen("E:/Desktop/Programming/Codeforce/input.txt", "r" , stdin );

    vector<ll> v;
    vector<ll> ::iterator it,p,q;

    ll ma=LONG_LONG_MIN;
    ll index=0;

    //list <ll> li;
    bool lool[2005];

void check (ll pos){
    //watch(v[pos]);
    //watch(v[pos+1]);
    //watch(v[pos-1]);
    if (v[pos+1]>v[pos]){
        v[pos+1] = v[pos];
    }
    //li.pb(v[pos]);
    if (v[pos+1]) check(pos+1);
}
void check2 (ll pos){
    //watch(v[pos]);
    //watch(v[pos+1]);
    //watch(v[pos-1]);
    if (v[pos-1]>v[pos]){
            v[pos-1] = v[pos];
        }
    //li.pb(v[pos]);
    if (v[pos-1]) check2(pos-1);
}

vector <ll> hi;

int main ()
{
    hitAi;
    MEM(lool,false);
    cin >> n;

    v.pb(0);

    FORN(i,n){
        cin >> x;
        v.pb(x);
        if (x>ma){
            ma=x;
            index=i+1;
            hi.clear();
            hi.pb(i+1);
        }
        else if (x==ma){
            hi.pb(i+1);
        }
    }
    index=hi.size()/2;
    v.pb(0);
    check(hi[index]);
    check2(hi[index]);

    FORN(i,n) cout << v[i+1] << " ";




}
