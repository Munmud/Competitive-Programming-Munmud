/*
          Moontasir Mahmood
        University of Rajshahi
*/
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

char make[1000];
ll ans = 0 , n ;
string s, pans;
bool found ;
void go ( int pos ,int rock , int paper , int sessiors ,int win )
{
    if ( pos == s.size())
    {
        if ( ceil( (double)n/2)<= win ){
                //watch2(floor( (double)n/2) , ceil( (double)n/2));
            found = true;
        }
        return;
    }
    if (s[pos] == 'R'){
        if (paper){ go (pos+1 , rock , paper-1 , sessiors , win+1) ; make[pos] = 'P' ;}
        if (found == true) return ;
        if (sessiors) { go (pos+1 , rock , paper , sessiors-1 , win) ; make[pos] = 'S' ;}
        if (found == true) return ;
        if (rock) { go (pos+1 , rock-1 , paper , sessiors , win) ; make[pos] = 'R' ;}
    }
    else if (s[pos] == 'P'){
        if (sessiors) {go(pos+1 , rock , paper , sessiors-1 , win+1) ;make[pos] = 'S' ;}
        if (found == true) return ;
        if (paper) {go(pos+1 , rock , paper-1 , sessiors , win) ;make[pos] = 'P' ;}
        if (found == true) return ;
        if (rock) {go(pos+1 , rock-1 , paper , sessiors , win) ;make[pos] = 'R' ;}
    }
    else if (s[pos] == 'S'){
        if (rock) {go(pos+1 , rock-1 , paper , sessiors , win+1) ;make[pos] = 'R' ;}
        if (found == true) return ;
        if (sessiors) {go(pos+1 , rock , paper , sessiors-1 , win) ;make[pos] = 'S' ;}
        if (found == true) return ;
        if (paper) {go(pos+1 , rock , paper-1 , sessiors , win) ;make[pos] = 'P' ;}
    }
}


int main ()
{
   //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );

    hitAi;
    ll  x , testCase , m , y   ;

    cin >> testCase;
    FORN(t,testCase)
    {
        found = false ;
        ll alice = 0 , bob = 0 , draw = 0 ;
        cin >> n;
        ll r , p , c ;
        cin >> r >> p >> c;
        cin >> s;

        go(0,r,p,c,0 );

        if (found == true) {
            cout << "YES" <<endl;
            FORN(i,n) cout << make[i] ;
            cout << endl;
        }
        else cout << "NO" << endl;


    }










}
