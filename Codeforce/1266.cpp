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

#define SIZE                1005
#define MOD                 20071027
using namespace std;
int tree[1005][1005] ;
bool check[1005][1005] ;

void update(int x , int y)
{
    while(x <= SIZE)
    {
        int y1 = y ;
        while(y1<=SIZE)
        {
            tree[x][y1]++ ;
            y1 += y1 & (-y1) ;
        }
        x+= x & (-x) ;
    }
}

int read(int x , int y)
{
    int sum = 0 ;
    while (x>0)
    {
        int y1 = y ;
        while (y1>0)
        {
            sum+= tree[x][y1] ;
            y1 -= y1 & (-y1) ;
        }
        x -= x & (-x) ;
    }
    return sum ;
}


int query(int x1 , int y1 , int x2 , int y2)
{
    return read(x2 , y2) - read(x1-1 , y2) - read(x2 , y1-1) + read(x1-1 , y1-1) ;
}

int main ()
{
   //freopen("E:/Programming/input.txt", "r" , stdin );

    hitAi;
    int testCase = 1  , m , y , n , x   ;
    scanf ("%d",&testCase) ;
    getchar() ;
    FORAB(t,1,testCase){
        MEM(tree , 0) ;
        MEM(check , false) ;
        int q ; scanf ("%d",&q) ;

        printf ("Case %d:\n",t) ;
        FORN(i,q)
        {
            int cmd ; scanf ("%d",&cmd) ;
            switch(cmd)
            {
            case 0 :
                scanf ("%d %d",&x ,&y) ;
                x++ , y++ ;
                if (!check[x][y])
                {
                    check[x][y] = true ;
                    update(x,y) ;
                }
                break ;

            case 1 :
                int x1 , y1 , x2 ,y2 ;
                scanf ("%d %d %d %d",&x1 ,&y1 ,&x2 ,&y2) ;
                x1++ , y1++ , x2++ , y2++ ;
                printf ("%d\n" ,  query(x1 , y1 , x2 , y2) );
                break ;


            }
        }


    }

}
