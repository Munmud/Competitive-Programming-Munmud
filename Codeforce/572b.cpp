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
#define hitAi               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<long long int, long long int>
#define VI                  vector <int>


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

typedef struct node
{
    int price;
    int volume ;
    int index ;
    node(int a , int b , int c)
    {
        price = a;
        volume = b;
        index = c ;
    }
};

list<node> buy,sell;
list<node>:: iterator it,ir;

bool compbuy(node a , node b)
{
    if (a.price==b.price)
    {
        return a.index<b.index ;
    }
    else
     return a.price > b.price ;

}

bool compsell(node a , node b)
{

if (a.price==b.price)
    {
        return a.index<b.index ;
    }
    else
     return a.price < b.price ;

}
bool idx(node a , node b)
{
    return a.index < b.index ;
}

int main ()
{
   //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );

    hitAi;
    ll n , x , testCase , s , a , b ;
    char ch ;

    cin >> n >> s ;

    FORN(i,n)
    {
        cin >> ch;

        if (ch == 'B' )
        {
            cin >> a >> b ;
            buy.push_back(node(a,b,i));

        }
        else
        {
            cin >> a >> b ;
            sell.push_back(node(a,b,i));
        }
    }




    buy.sort ( compbuy );
    sell.sort(compsell);
    int cnt = 0;

    for( it = buy.begin() ; it!=buy.end() ; it++)
    {
        cnt++;
        while (buy.size()){
                ir = it;
                ir++;
                if (ir == buy.end()) break ;
                else if (it->price == ir->price){
                    it->volume += ir->volume ;
                    buy.erase( ir );
                }
                else break ;
            }



    }





    cnt = 0;

    for( it = sell.begin() ; it!=sell.end() ; it++)
    {
        cnt++;
        while (sell.size()){
                    ir = it;
                    ir++;
                    if (ir == sell.end()) break ;
                    else if (it->price == ir->price){
                        it->volume += ir->volume ;
                        sell.erase( ir );
                    }
                    else break ;
                }
            while (cnt==s){
            ir = it;
            ir++;
            if (ir == sell.end()) break;
            else sell.erase(ir);
        }


    }

    sell.sort(compbuy);

    cnt = 0;
    for( it = sell.begin() ; it!=sell.end() && cnt <s  ; it++,cnt++ )
       {
           cout << "S "  << it->price << " " << it->volume << endl ;
       }
       cnt = 0;

   for( it = buy.begin() ; it!=buy.end()&& cnt<s ; it++,cnt++)
   {
       cout << "B " << it->price << " " << it->volume << endl ;
   }








}

