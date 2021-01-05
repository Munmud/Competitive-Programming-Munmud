
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
#define hitAi               ios_base::sync_with_stdio(false)

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)

#define PII                 pair<int, int>
#define PLL                 pair<Long long int, Long long int>
#define VI                  vector <int>

using namespace std;

int main ()
{
    hitAi;

    string s;
    cin >> s ;

    int k,x,len, ans=0, max=INT_MIN,i;

    cin >> k;

    int letter[27];
    FORN(i,26){
        cin >> x ;
        letter[i] = x;
        if (x>max)
            max=x;
    }

    FORN(i,s.length()){
        x= (int)s.at(i);
        x-=96;
        //watch(x);
        ans+= (i+1) * (letter[x-1]) ;
        //watch2(i+1,letter[x-1]);
        //watch(ans);

        //cout << endl;
    }
    i=s.length();
    //watch(i);
    while (k--){
        i++;
        ans+=max*i;
        //watch2(max,i);
        //watch(ans);
    }



    cout << ans << endl;
}
