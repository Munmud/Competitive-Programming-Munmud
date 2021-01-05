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
#define AIN(A, B, C)        assert(IN(A, B, C))

#define watch2(x , y)       cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define watch(x)            cout << (#x) << " is " << (x) << endl
#define hitAi               ios_base::sync_with_stdio(false)

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)



using namespace std;
int main ()
{
    hitAi ;
    int testCase, n , x, a, b;
    cin >> testCase ;

    while (testCase--){
        int ans = 0, temp ;
        cin >> n >> x >> a >> b ;

        ans = MAX(a,b)-MIN(a,b);
        //watch(ans);
        //cout << MAX(a,b)<<endl;
        //cout << MIN(a,b)<<endl;
        temp = n-MAX(a,b)+MIN(a,b)-1;
        //watch(temp);

        if (temp<=x)
            ans+=temp ;
        else ans+=x ;

        cout << ans << endl;

    }
}
