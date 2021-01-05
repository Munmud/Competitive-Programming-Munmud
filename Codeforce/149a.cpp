
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
    int n, s[14],x,max,ans=0,count=0;

    cin >> n;

    FORN(i,12){
        cin >>x ;
        s[i]=x;
    }
    s[12]=0;

    FORN(i,12){
        max=i;
        FORAB(j,i+1,12){
            if ( s[j]>s[max] )
                max=j;
        }
        if (max!=i)
            swap(s[max],s[i]);
        ans+=s[i];
        if (ans>=n)
        {
            count++;
            break;
        }
        else count++;

    }
    if (!n ) cout << "0" ;
    else if (ans<n) cout << "-1" ;
    else cout << count ;
}

