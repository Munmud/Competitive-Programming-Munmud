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

using namespace std;

int main ()
{
    hitAi;
    ll n , x ,m, testCase ;
    //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );
    cin >> testCase;
    FORAB(t,1,testCase)
    {
        cin >> n >> m ;

        ll cur = 0;
        ll time = 0 ;

        list <ll> li ;
        list <ll> :: iterator it;
        set <ll >se[n+1] ;
        ll arr[m+1] ;

        MEM(arr,-1);

        FORAB(i,1,n) li.push_back(i);
        ll count = 0;

        while( count!=n )
        {

            cur = cur%m ;

            //watch(cur);

            if ( arr[cur] != -1 )
            {
                x = arr[cur] ;
               // watch(x);
                if ( se[x].size() != m ) li.push_back(x) ;
                else count++;
                arr[cur]= -1 ;
            }

            if (li.size())
            {
                    for ( it = li.begin(); it!=li.end() ; it++)
                        {
                            x = *it ;
                            //watch(x);
                            if( se[*it].find(cur) == se[*it].end()  )
                            {
                                //watch(*it);
                                arr[cur]= *it ;
                                se[*it].insert(cur);
                                li.erase(it);
                                break;
                            }

                    }
            }


            cur++;time++ ;
            //cout << endl ;

        }
        //cout << endl;
        //FORN(i,n+1) watch(se[i].size());
        cout << "Case " << t << ": " << time*5 << endl ;
        //watch(time);
    }
}
