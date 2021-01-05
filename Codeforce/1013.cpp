/*
                     Moontasir Mahmood
          Information and Communication Engineering
                  University of Rajshahi
*/
#include <bits/stdc++.h>

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

#define wa2(x , y)          cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define wa(x)               cout << (#x) << " is " << (x) << endl
#define hitAi               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);ios::sync_with_stdio(0)

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

#define SIZE                5005
#define MOD                 20071027
using namespace std;
char a[100] , b[100] ;
int mx_size , n , m , testCase ;
int visit[40][40] ;
unsigned long long taken[40][40][40] ;


int lis(int i , int j )
{
    if ( i == n ) return m-j ;
    if (j == m) return n-i ;
    if (visit[i][j]!=-1) return visit[i][j] ;

    if ( a[i] == b[j] ) return visit[i][j] = 1 + lis(i+1 , j+1) ;

    return visit[i][j] =  1 +  MIN( lis(i+1,j) , lis(i , j+1) ) ;

}
unsigned long long go2(int i , int  j , int l)
{
    if (i == n && j!=m) return go2(i , j+1 , l-1) ;
    if (j == m && i!=n) return go2(i+1 , j , l-1) ;
    if (i == n && j == m && l == 0) return 1 ;
    if (i == n && j== m && l!=0) return 0 ;

    if (taken[i][j][l] != -1) return taken[i][j][l] ;

    if (a[i] == b[j]) return taken[i][j][l] = go2(i+1 , j+1 , l-1 ) ;
    return taken[i][j][l] = go2(i+1 , j , l-1) + go2(i , j+1 , l-1) ;
}

int main ()
{
   freopen("E:/Programming/input.txt", "r" , stdin );

    hitAi;
    scanf ("%d",&testCase) ;

    FORAB(t,1,testCase){

        scanf ("%s",&a) ;
        scanf("%s",&b) ;
        n =  strlen(a) ;
        m =  strlen(b) ;

        MEM(visit , -1 ) ;
        MEM(taken , -1) ;
        mx_size = lis(0,0) ;


        printf("Case %d: %d %lld\n",t,mx_size , go2(0,0,mx_size) ) ;




    }

}
