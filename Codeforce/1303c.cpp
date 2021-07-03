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

int main ()
{
    hitAi;
    ll n , x , testCase , ans = 0 , sum = 0 , a , b , c , count = 0 ;
    //freopen("E:/Desktop/Programming/Codeforce/input.txt", "r" , stdin );
int letter[150];
    cin >> testCase;
    while (testCase--){
            ans=1;
            CLR(letter);
        string s;
        ll vsize = 0;
        list <char> v;
        list <char> ::iterator it,before,after;

        cin >> s;
        FORN(i,s.size()){
            char ch = s[i];
            if (! letter[(int) ch] ){
                letter[(int) ch] ++;

                if (!vsize){
                    v.pb(ch);
                    vsize++;
                    it=v.begin();
                    continue;
                    //watch(*it);
                }
                after = it;
                before = v.begin();

                if (++after==v.end()){
                    v.pb(ch);
                    vsize++;
                    it++;
                }
                else if ( before == it ){
                    v.push_front(ch);
                    vsize++;
                    it--;
                }
                else {
                    ans =0;
                    break;
                }
                //watch(*it);

            }
            else {
                after = it;
                before = it;
                after++;
                before--;
                if (*before == ch){
                    it--;
                }
                else if (*after== ch){
                    it++;
                }
                else {
                    ans = 0;
                    break;
                }
            }

        }
        if (ans){
                cout << "YES" << endl;
            for (it=v.begin(); it!=v.end();it++)
                cout << *it ;
            FORAB(i,97,97+25){
                if( !letter[i] )cout << (char)i ;
            }
            cout << endl;

        }
        else cout << "NO" << endl;
        v.clear();
    }

}
