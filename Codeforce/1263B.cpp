

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
int  s[10000],coun=0 ;

    VI v,z;
    queue <int> have;

void check(int number){

//watch(number);
    coun++;
    int a,b,c,d;
        a=number%10;
        number = number/10;
        FORAB(i,1,9){
            //int b
            b=a;
            b+=i;
            if (b>9)
                b-=10;
                //watch(b);
            int n = number*10+b;
            if (!s[n]){
                s[n]++;
                z.pb(n);
                break;
            }

        }
}
int main ()
{
    hitAi;
    //freopen("E:/Desktop/Programming/Codeforce/input.txt", "r" , stdin );

    int n , x , testCase , ans=0 , sum = 0 , count=0 ;

    cin >> testCase ;

    while (testCase--)
    {
        coun=0;

        cin >> n ;
        MEM(s,0);
        while (n--){
            cin >> x ;
            if (s[x]) {
                v.pb(x);
                have.push(-1);
            }
            else {
                s[x]++;
                have.push(x);
            }

        }

        FORN(i,v.size()){
                check(v[i]);
                //watch(v[i]);
        }
        cout << coun << endl;
        int i=0;
        while(have.size()){
                 x =have.front();
                 have.pop();
                 if (x==-1) x=z[i++];
                //check(x);
                if (x>99 && x<1000) cout << "0";
                else if (x>9 && x<100) cout << "00";
                else if (x>=0 && x<10) cout << "000";
                cout << x << endl;
        }
        v.clear();
        have.empty();
        z.clear();
    }
}
