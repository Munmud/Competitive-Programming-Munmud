/*
          Moontasir Mahmood
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




int main ()
{
   //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );

    hitAi;
    ll n , x , testCase , m , y ,b=0,s=0,c=0 ,cnt = 0  ;
    string sp; cin >> sp;
    for (auto ch : sp)
    {
        if (ch == 'B') b++ ;
        else if (ch == 'S') s++;
        else c++ ;
    }
    ll bread, sausage, cheese , breadCost, sausageCost ,cheeseCost ;
    cin >> bread >> sausage >> cheese >> breadCost >> sausageCost >> cheeseCost ;
    ll have ; cin >> have ;

    if (b == 0) bread = 0;
    if (s==0) sausage = 0;
    if (c==0) cheese = 0 ;

    ll t = 100 ;
    if (b) t = min(t , bread/b);
    if (s) t = min(t,  sausage/s) ;
    if (c) t = min(t, cheese/c);

    cnt+=t ;

    bread= MAX (bread-t*b,0);
    sausage= MAX(sausage-t*s,0);
    cheese= MAX(cheese-t*c,0);

    //watch(t) ;


    while( bread  || sausage  || cheese )
    {
        ll tempcost = 0;
        if (bread<b)
        {
            have-=(b-bread)*breadCost ;
            bread = 0 ;
        }

        else bread-=b ;

        if (sausage<s)
        {
            have-=(s-sausage)*sausageCost ;
            sausage = 0 ;
        }
        else sausage-=s;

        if (cheese<c)
        {
            have-=(c-cheese)*cheeseCost;
            cheese = 0 ;
        }
        else cheese-=c ;

        if (have>=0)
        {
            cnt++;
        }
        else break ;
    }
    ll tempCost = b*breadCost+s*sausageCost+c*cheeseCost ;
    if (have>=tempCost)
    cnt += have/tempCost;

    cout << cnt <<endl ;


}
