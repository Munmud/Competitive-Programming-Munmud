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
#define ALLR(V)              V.rbegin(), V.rend()
#define IN(A, B, C)         ((B) <= (A) && (A) <= (C))
//#define AIN(A, B, C)        assert(IN(A, B, C))

#define watch2(x , y)       cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define watch(x)            cout << (#x) << " is " << (x) << endl
#define hitAi               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);ios::sync_with_stdio(0)

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<long long int, long long int>
#define VI                  vector <int>


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



using namespace std;
ll ans1= -1 , ans2 = -1 ;
void go ( char pre , ll p , ll v , ll b , ll r ,bool Pturn  )
{
    //watch2(b,r) ;
    //watch2(p,v) ;
    if( b==0 && r==0 )
    {
        if (ans1 < p)
        {
            ans1 = p ;
            ans2 = v ;

        }
        //watch2(p,v) ;
        return ;
    }
    if ( Pturn  == true )
    {
        if ( pre == 'R' )
        {
            if (r) go( 'R' , p+1 , v , b , r-1 , false ) ;
            else go ( 'B' , p , v+1 , b-1 , r , false ) ;
        }
        else {
            if (b) go ( 'B' , p+1 , v ,b-1 , r ,false ) ;
            else go ( 'R' , p , v+1 , b , r-1 , false ) ;
        }
    }
    else
    {
        if ( pre == 'R' )
        {
            if (b) go ( 'B' , p , v+1 ,b-1 , r ,true ) ;
            else go ( 'R' , p+1 , v , b , r-1 , true ) ;
        }
        else{
            if (r) go( 'R' , p , v+1 , b , r-1 , true ) ;
            else go ( 'B' , p+1 , v , b-1 , r , true ) ;
        }
    }

}


int main ()
{
   //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );

    hitAi;
    ll n , x , testCase , m , y   ;
    bool flag = false ;

    cin >> n >> m ;

    if (n) go('B',0,0,n-1,m,false);
    if (m) go('R',0,0,n,m-1,false);



    cout << ans1 <<" " << ans2 << endl;





}

