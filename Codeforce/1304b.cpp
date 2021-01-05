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
char s[101][55];
bool check[101];

int main ()
{
    //hitAi;
    MEM(check ,false);
    ll n , x , testCase , ans = 0 , sum = 0 , a , b , c , count = 0 ;
    //freopen("E:/Desktop/Programming/Codeforce/input.txt", "r" , stdin );
    ll m;
    cin >> n >> m ;
    FORN(i,n){
        cin >> s[i];
    }
    char s3[500000];
    char s2[500000];
    char s1[500000];
    char t [5]={0};
    ll pal =0;
    ll hoyeche=0;

    FORN(i,n){
        strcpy(s1,s[i]);
        hoyeche=0;
        //watch(s1);
        strrev(s1);

        FORAB(j,i+1,n-1){
                //watch(s[i]);
                //watch(s[j]);
            if(!strcmp(s1,s[j]) && !check[j]){
                    check[j]=true;
                //watch(s1);
            //watch(s[j]);

                strcpy(s1,s[i]);
                strcat(s1,s3);
                strcat(s1,s[j]);
                strcpy(s3,s1);
                hoyeche=1;
                break ;

            }
        }
        if (!hoyeche){
            if(!strcmp(s1,s[i])){
                if (strlen(s2) < strlen(s[i]))
                    strcpy(s2,s[i]);
           }
        }


    }
    //watch(s2);
    //watch(s3);

    if (strlen(s2)){
            ll len=strlen(s3)+strlen(s2);
        cout <<len << endl ;

            //watch(len);
            len =strlen(s3);
        FORN(i,len/2){ printf ("%c",s3[i]);}
        cout << s2 ;
        FORAB(j,len/2,len-1) { printf ("%c",s3[j]);}
    cout << endl;
    }
    else {
        cout <<strlen(s3) << endl ;
        cout << s3 << endl;
    }



}
