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
int n , arr[300005] ;
int mn[20][300005] ;
int gd [20][300005] ;

void build()
{
    for (int i = 0 ; i<=log2(n) ; i++){
        for (int j = 0 ; j<n ; j++)
        {
            if (i == 0){
                mn[0][j] = arr[j] ;
                gd[0][j] = arr[j] ;
                continue ;
            }
            if (j+ (1<<i)-1 >=n) continue ;
            mn[i][j] = MIN ( mn[i-1][j] ,  mn[i-1][j+(1<<(i-1))] ) ;
            gd[i][j] = gcd ( gd[i-1][j] ,  gd[i-1][j+(1<<(i-1))] ) ;
            //cout << gd[i][j] << " " ;
        }
        //cout << endl ;
    }
}
int qmn(int l , int r)
{
    int i = (int) log2(r-l+1) ;
    return MIN( mn[i][l] , mn[i][r-(1<<i)+1] ) ;
}
int qgd(int l , int r)
{
    int i = (int) log2(r-l+1) ;
    return gcd( gd[i][l] , gd[i][r-(1<<i)+1] ) ;
}
vector <int> v ;
bool ok(int x)
{
    bool found = false ;
    for (int i = 0 , j = x-1 ; j<n ; i++ , j++)
    {
        if ( qmn(i,j) == qgd(i,j) ){
            if (found == false) v.clear() ;
            v.pb(i);
            found = true ;
        }
    }
    return found ;
}
int main ()
{
   //freopen("E:/Programming/input.txt", "r" , stdin );
    Speed ;

    cin >> n ;
    FORN(i,n) cin >> arr[i] ;
    build() ;
    int l = 1 , r = n , ans ;
    while (l<=r)
    {
        int mid = (l+r)/2 ;
        if (ok(mid)){
            l = mid+1 ;
            ans = mid ;
        }
        else r = mid-1 ;
    }
    cout << SZ(v) << " " << ans-1 << endl ;
    for (int i : v) cout << i+1 <<  " " ;


}
