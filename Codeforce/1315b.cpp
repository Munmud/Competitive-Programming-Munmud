
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
    ll n , x , testCase , ans = 0 , sum = 0 , a , b , c , count = 0 ;
    //freopen("E:/Desktop/Programming/Codeforce/input.txt", "r" , stdin );

    cin >> testCase;
    while (testCase--){

        ans = 0;
        count = 0;

        vector <ll> an,bn;
        vector <ll> ::iterator it,ir;
        an.clear();
        bn.clear();

        cin >> a >> b >> x ;

        string s;
        cin >> s;

        char t=s[0];

        FORN(i,s.size()){
            if (s[i]!=t){
                if (t=='A') an.pb(count);
                else if (t == 'B') bn.pb(count);
                count=1;
                t=s[i];
            }
            else count++;
        }

        if (t=='A') an.pb(count);
        else if (t == 'B') bn.pb(count);

        sort(ALLR(an));
        sort(ALLR(bn));

        an.pb(0);
        bn.pb(0);

        it = an.begin();
        ir = bn.begin();



        ll ca,cb,cost=0;

        while (*it!=0 || *ir!=0){

        ca = *it * a;
        cb = *ir * b;

        watch(ca);
        watch(cb);



        if (ca<cb ){
            ll temp = ca+cost;
            if (temp<=x)
                cost=temp;
            else ans+=*it;
            it++;
        }
        else {
            ll temp = cb+cost;
            if (temp<=x)
                cost=temp;
            else ans+=*ir;
            ir++;
        }

        }



        cout << ans << endl;
        ans = 0;




        //FORN(i,an.size()) watch(an[i]);
        //FORN(i,bn.size()) watch(bn[i]);
    }
}
