/*
                     Moontasir Mahmood
          Information and Communication Engineering
                  University of Rajshahi
*/
#include <bits/stdc++.h>

#define setinf(ar)          memset(ar,126,sizeof ar)
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
#define ALLR(V)             V.rbegin(), V.rend()
#define IN(A, B, C)         ((B) <= (A) && (A) <= (C))
//#define AIN(A, B, C)        assert(IN(A, B, C))
#define Speed               ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define wa2(x , y)          cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define wa(x)               cout << (#x) << " is " << (x) << endl

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<long long int, long long int>
#define VI                  vector <int>
#define BOUNDARY(i, j)      ((i >= 0 && i < row) && (j >= 0 && j < column))
#define max3(x, y, z)       MAX(MAX(x, y), MAX(y, z))



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

/*
template<typename T>
T nCr(T n, T r) {
    if(r > n - r) r = n - r;
    int  ans = 1,i;
    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }
	return ans;
}
*/
using namespace std;
vector <int> primeNumber ;
void sieve(int n)
{
    bool mark[1000002] ;
    MEM(mark , true) ;
    int i , j , limit = sqrt(n*1.) +2 ;
    //mark[1] = false ;
    //for (i = 4 ; i<=n ; i+=2) mark[i] = false ;

    primeNumber.emplace_back(2) ;
    for (i = 3 ; i<=n ; i+=2)
    {
        if (mark[i] == false) continue ;
        primeNumber.emplace_back(i) ;
        if (i<=limit){
            for (j = i*i ; j<=n ; j+=i*2)
                mark[j] = false ;
        }
    }
}


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

#define SIZE                (int)5005
#define MOD                 (ll)1e9+7



int main ()
{
   //freopen("E:/Programming/input.txt", "r" , stdin );
    Speed ;

    int testCase = 1 ;cin >> testCase ;
    FORAB(tes,1,testCase){
        bool found = true ;
        int n , m , arr[305][305] ;
        cin >> n >> m ;
        FORN(i,n) FORN(j,m) cin >> arr[i][j] ;
        if (arr[0][0] > 2) found = false ;
        else if (arr[0][m-1] >2 )found = false ;
        else if (arr[n-1][0] >2 )found = false ;
        else if (arr[n-1][m-1] >2 )found = false ;

        arr[0][0] = 2 ;
        arr[0][m-1] = 2 ;
        arr[n-1][0] = 2 ;
        arr[n-1][m-1] = 2 ;
        if (m>2){
            FORAB(i,1,m-2){
                if (arr[0][i] >3 || arr[n-1][i]>3) found = false ;
                arr[0][i] = 3 , arr[n-1][i] = 3 ;
            }
        }

        if (n>2){
            FORAB(i,1,n-2){
                if (arr[i][0] >3 || arr[i][m-1]>3) found = false ;
                arr[i][0] = 3 , arr[i][m-1] = 3 ;
            }
        }
        if (n>2 && m>2){
            FORAB(i,1,n-2)
            {
                FORAB(j,1,m-2)
                {
                    if (arr[i][j]>4) found = false ;
                    arr[i][j] = 4 ;
                }
            }
        }
        if (found == false) cout << "NO" << endl ;
        else {
            cout << "YES" << endl ;
            FORN(i,n){
                FORN(j,m){
                    cout << arr[i][j] << " " ;
                }
                cout << endl ;
            }
        }

    }

}
