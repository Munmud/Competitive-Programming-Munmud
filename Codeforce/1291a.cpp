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
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<Long long int, Long long int>
#define VI                  vector <int>

using namespace std;
int number(char cha){
    int x=(int)cha;
    x-=48;
    return x;
}

int main ()
{
    //hitAi;
    int n , x , testCase , ans = 0 , sum = 0 , a , b , c , count = 0,del ;
    int evenCount=0,oddCount=0;
    //freopen("E:/Desktop/Programming/Codeforce/input.txt", "r" , stdin );

    char ch;
    char s[3005];

    cin >> testCase;

    while (testCase--){
            oddCount=0;
            evenCount=0;
            ans=0;
        cin >> n;
        FORN(i,n){
            cin >> s[i];
            x=number(s[i]);
            sum+=s[i]
            //watch(x);
            if (x%2!=0)
                oddCount++;
            else evenCount++;
        }
        //watch(oddCount);
        if (oddCount%2!=0)
            oddCount--;
        while(number(s[n-1])%2==0) {
            n--;
                evenCount--;}

        //watch2(oddCount,evenCount);

        FORN(i,n){
           // watch(i);
            x=number(s[i]);
            if (x%2==0 && evenCount){
                evenCount--;
                if(x==0) continue;
                cout << s[i];

                ans++;
            }
            else if (x%2!=0 && oddCount){
                cout << s[i];
                oddCount--;
                ans++;
            }
        }
        if (!ans) cout << -1;
        cout << endl;
        //watch(n);
        //watch(testCase);
    }


}

